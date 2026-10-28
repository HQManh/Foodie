// rea decompile_all
// name: MessagePack.MessagePackReader$$ReadString
// address: 0x738d5a4
// body: available
// range: 0x738d5a4-0x738d7ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x738d6ec to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x738d730 to 0x738d7f0 MessagePack.MessagePackReader$$ReadStringSlow (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x738d774 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x738d7e8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x738d7ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 MessagePack_MessagePackReader__ReadString(long param_1)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  
  if ((DAT_09520a9b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d3518);
    FUN_03f5c2a4(&DAT_091b9778);
    FUN_03f5c2a4(&DAT_091b9798);
    FUN_03f5c2a4(&DAT_091b9f90);
    FUN_03f5c2a4(&DAT_091b9ff8);
    FUN_03f5c2a4(&DAT_0918b398);
    DAT_09520a9b = 1;
  }
  if (DAT_09516fa8 == '\0') {
    FUN_03f5c2a4(&DAT_091b9f90);
    DAT_09516fa8 = '\x01';
  }
  cVar4 = MessagePack_MessagePackReader__get_NextCode(param_1);
  if (cVar4 == -0x40) {
    FUN_042658c0(param_1,1,DAT_091b9f90);
    uVar6 = 0;
  }
  else {
    uVar5 = MessagePack_MessagePackReader__GetStringLengthInBytes(param_1);
    lVar10 = DAT_091b9ff8;
    uVar8 = (ulong)uVar5;
    lVar7 = *(long *)(DAT_091b9ff8 + 0x20);
    uVar2 = *(ushort *)(lVar7 + 0x135);
    if ((uVar2 & 1) == 0) {
      FUN_03f95a6c(lVar7);
      lVar7 = *(long *)(lVar10 + 0x20);
      uVar2 = *(ushort *)(lVar7 + 0x135);
    }
    lVar1 = *(long *)(param_1 + 0x60);
    uVar6 = *(undefined8 *)(param_1 + 0x68);
    if ((uVar2 & 1) == 0) {
      FUN_03f95a6c(lVar7);
      lVar7 = *(long *)(lVar10 + 0x20);
      uVar2 = *(ushort *)(lVar7 + 0x135);
    }
    uVar3 = *(uint *)(param_1 + 0x70);
    if ((uVar2 & 1) == 0) {
      lVar7 = FUN_03f95a6c(lVar7);
    }
    uVar9 = (uint)uVar6;
    if (uVar9 < uVar3) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0xe0) + 0x20) + 0x135) & 1) == 0)
    {
      FUN_03f95a6c();
    }
    uVar9 = uVar9 - uVar3;
    if ((long)(int)uVar9 < (long)uVar8) {
      uVar6 = MessagePack_MessagePackReader__ReadStringSlow(param_1,uVar8);
      return uVar6;
    }
    if (*(int *)(DAT_0918b398 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((int)uVar5 < 0) {
      uVar6 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar6,DAT_091d3518);
    }
    lVar10 = **(long **)(DAT_0918b398 + 0xb8);
    if (uVar9 < uVar5) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
    }
    if ((*(ushort *)(*(long *)(DAT_091b9778 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar6 = System_Text_Encoding__GetString(lVar10,lVar1 + (int)uVar3,uVar8,0);
    FUN_042658c0(param_1,uVar8,DAT_091b9f90);
  }
  return uVar6;
}

