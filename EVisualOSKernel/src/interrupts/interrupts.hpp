#pragma once
#include "../BasicRenderer.hpp"
#include "../userinput/mouse.hpp"

#define PIC1_COMMAND 0x20
#define PIC1_DATA 0x21
#define PIC2_COMMAND 0xA0
#define PIC2_DATA 0xA1
#define PIC_EOI 0x20

#define ICW1_INIT 0x10
#define ICW1_ICW4 0x01
#define ICW4_8086 0x01

struct interrupt_frame;
__attribute__((interrupt)) void PageFault_Handler(interrupt_frame* frame, unsigned long int error_code);
__attribute__((interrupt)) void DoubleFault_Handler(interrupt_frame* frame, unsigned long int error_code);
__attribute__((interrupt)) void GPFault_Handler(interrupt_frame* frame, unsigned long int error_code);
__attribute__((interrupt)) void TSSFault_Handler(interrupt_frame* frame, unsigned long int error_code);
__attribute__((interrupt)) void DebugFault_Handler(interrupt_frame* frame);
__attribute__((interrupt)) void KeyboardInt_Handler(interrupt_frame* frame);
__attribute__((interrupt)) void MouseInt_Handler(interrupt_frame* frame);
__attribute__((interrupt)) void PITInt_Handler(interrupt_frame* frame);

__attribute__((interrupt)) void Empty_Handler(interrupt_frame* frame);

void RemapPIC();
void PIC_EndMaster();
void PIC_EndSlave();