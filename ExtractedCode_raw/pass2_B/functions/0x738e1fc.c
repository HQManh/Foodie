// rea decompile_all
// name: MessagePack.MessagePackReader$$<TryGetBytesLength>g__SlowPath|56_0
// address: 0x738e1fc
// body: available
// range: 0x738e1fc-0x738e2f7 inclusive
// range: 0x738e2fc-0x738e4e7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x738e2f4 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x738e364 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x738e4c8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x738e4e4 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint MessagePack_MessagePackReader__<TryGetBytesLength>g__SlowPath_56_0
               (long param_1,int param_2,uint param_3,undefined4 *param_4,int *param_5)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined1 *__s;
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  undefined1 auStack_60 [8];
  long local_58;
  
  while( true ) {
    lVar4 = tpidr_el0;
    local_58 = *(long *)(lVar4 + 0x28);
    if ((DAT_09520ab3 & 1) == 0) {
      FUN_03f5c2a4(&DAT_091b9f90);
      FUN_03f5c2a4(&DAT_091b9fa8);
      FUN_03f5c2a4(&DAT_091b9ff8);
      FUN_03f5c2a4(&DAT_091ba8e8);
      FUN_03f5c2a4(&DAT_091ba930);
      DAT_09520ab3 = 1;
    }
    lVar5 = DAT_091b9ff8;
    if (param_2 - 2U < 2) break;
    if (param_2 != 1) {
      if (param_2 == 0) {
        FUN_042658c0(param_1,(long)*param_5,DAT_091b9f90);
        uVar7 = 1;
        goto LAB_0738e458;
      }
      if (*(long *)(lVar4 + 0x28) == local_58) {
        MessagePack_MessagePackReader__ThrowUnreachable();
LAB_0738e49c:
        uVar10 = thunk_FUN_03fc39d4(&DAT_091b9ff8);
        auVar13 = FUN_03eaad80(param_1,uVar10);
        if (auVar13._8_4_ == 0) {
          if (*(long *)(lVar4 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
        }
        else if (*(long *)(lVar4 + 0x28) == local_58) {
          MessagePack_MessagePackReader__ThrowInvalidCode(*auVar13._0_8_);
        }
      }
      goto LAB_0738e4e4;
    }
    if ((param_3 & 1) == 0) goto LAB_0738e49c;
    lVar8 = *(long *)(DAT_091b9ff8 + 0x20);
    uVar2 = *(ushort *)(lVar8 + 0x135);
    if ((uVar2 & 1) == 0) {
      FUN_03f95a6c();
      lVar8 = *(long *)(lVar5 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
    }
    lVar1 = *(long *)(param_1 + 0x60);
    uVar10 = *(undefined8 *)(param_1 + 0x68);
    if ((uVar2 & 1) == 0) {
      FUN_03f95a6c();
      lVar8 = *(long *)(lVar5 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
    }
    uVar7 = *(uint *)(param_1 + 0x70);
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    uVar11 = (uint)uVar10;
    if (uVar11 < uVar7) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0xe0) + 0x20) + 0x135) & 1) == 0)
    {
      FUN_03f95a6c();
    }
    param_2 = MessagePack_MessagePackPrimitives__TryReadStringHeader
                        (lVar1 + (int)uVar7,uVar11 - uVar7,param_4,param_5);
    if (*(long *)(lVar4 + 0x28) != local_58) goto LAB_0738e4e4;
    param_3 = 0;
  }
  iVar3 = *param_5;
  if (iVar3 == 0) {
    memset((void *)0x0,0,0);
    __s = (undefined1 *)0x0;
  }
  else {
    __s = auStack_60 + -((long)iVar3 + 0xfU & 0xfffffffffffffff0);
    memset(__s,0,(long)iVar3);
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
  }
  uVar9 = FUN_04d4efec(param_1,__s,iVar3,DAT_091b9fa8);
  if ((uVar9 & 1) == 0) {
    uVar7 = 0;
    *param_4 = 0;
  }
  else {
    auVar12 = FUN_06108530(__s,iVar3,DAT_091ba930);
    if ((param_3 & 1) == 0) {
      uVar6 = MessagePack_MessagePackPrimitives__TryReadStringHeader
                        (auVar12._0_8_,auVar12._8_8_,param_4,param_5);
    }
    else {
      uVar6 = MessagePack_MessagePackPrimitives__TryReadBinHeader();
    }
    uVar7 = MessagePack_MessagePackReader__<TryGetBytesLength>g__SlowPath_56_0
                      (param_1,uVar6,param_3 & 1,param_4,param_5);
  }
LAB_0738e458:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return uVar7 & 1;
  }
LAB_0738e4e4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

