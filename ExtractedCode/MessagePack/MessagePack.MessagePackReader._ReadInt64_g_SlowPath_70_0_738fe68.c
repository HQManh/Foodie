// rea decompile_all
// name: MessagePack.MessagePackReader$$<ReadInt64>g__SlowPath|70_0
// address: 0x738fe68
// body: available
// range: 0x738fe68-0x738ff2f inclusive
// range: 0x738ff34-0x7390063 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x738ff2c to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x738fff8 to 0x738e178 MessagePack.MessagePackReader$$ThrowNotEnoughBytesException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7390030 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7390060 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
MessagePack_MessagePackReader__<ReadInt64>g__SlowPath_70_0
          (undefined8 param_1,int param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  void *__s;
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_50 = param_3;
  if ((DAT_09520abc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9f90);
    FUN_03f5c2a4(&DAT_091b9fa8);
    FUN_03f5c2a4(&DAT_091ba8e8);
    FUN_03f5c2a4(&DAT_091ba930);
    DAT_09520abc = 1;
  }
  if (param_2 - 2U < 2) {
    iVar1 = *param_4;
    if (iVar1 == 0) {
      memset((void *)0x0,0,0);
      __s = (void *)0x0;
    }
    else {
      __s = (void *)((long)&local_50 - ((long)iVar1 + 0xfU & 0xfffffffffffffff0));
      memset(__s,0,(long)iVar1);
      if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
    }
    uVar4 = FUN_04d4efec(param_1,__s,iVar1,DAT_091b9fa8);
    if ((uVar4 & 1) == 0) {
      if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
        MessagePack_MessagePackReader__ThrowNotEnoughBytesException();
      }
      goto LAB_07390060;
    }
    auVar7 = FUN_06108530(__s,iVar1,DAT_091ba930);
    uVar3 = MessagePack_MessagePackPrimitives__TryReadInt64
                      (auVar7._0_8_,auVar7._8_8_,&local_50,param_4);
    param_3 = MessagePack_MessagePackReader__<ReadInt64>g__SlowPath_70_0
                        (param_1,uVar3,local_50,param_4);
  }
  else {
    if (param_2 != 0) {
      if (param_2 == 1) {
        uVar5 = thunk_FUN_03fc39d4(&DAT_091b9ff8);
        auVar8 = FUN_03eaad80(param_1,uVar5);
        puVar6 = auVar8._0_8_;
        if (auVar8._8_4_ == 0) {
          if (*(long *)(lVar2 + 0x28) == local_48) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          goto LAB_07390060;
        }
      }
      else {
        if (*(long *)(lVar2 + 0x28) != local_48) goto LAB_07390060;
        puVar6 = (undefined1 *)MessagePack_MessagePackReader__ThrowUnreachable();
      }
      if (*(long *)(lVar2 + 0x28) == local_48) {
        MessagePack_MessagePackReader__ThrowInvalidCode(*puVar6);
      }
      goto LAB_07390060;
    }
    FUN_042658c0(param_1,(long)*param_4,DAT_091b9f90);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return param_3;
  }
LAB_07390060:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

