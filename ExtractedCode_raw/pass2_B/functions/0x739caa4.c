// rea decompile_all
// name: FUN_0739caa4
// address: 0x739caa4
// body: available
// range: 0x739caa4-0x739cbcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x739cb50 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0739caa4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  int local_34;
  
  if (DAT_09520b30 == '\0') {
    FUN_03f5c2a4(&DAT_091b9f90);
    FUN_03f5c2a4(&DAT_091b9ff8);
    DAT_09520b30 = '\x01';
  }
  lVar4 = DAT_091b9ff8;
  local_34 = 0;
  lVar7 = *(long *)(DAT_091b9ff8 + 0x20);
  uVar3 = *(ushort *)(lVar7 + 0x135);
  if ((uVar3 & 1) == 0) {
    FUN_03f95a6c();
    lVar7 = *(long *)(lVar4 + 0x20);
    uVar3 = *(ushort *)(lVar7 + 0x135);
  }
  lVar1 = *(long *)(param_1 + 0x60);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  if ((uVar3 & 1) == 0) {
    FUN_03f95a6c();
    lVar7 = *(long *)(lVar4 + 0x20);
    uVar3 = *(ushort *)(lVar7 + 0x135);
  }
  uVar6 = *(uint *)(param_1 + 0x70);
  if ((uVar3 & 1) == 0) {
    lVar7 = FUN_03f95a6c();
  }
  uVar8 = (uint)uVar2;
  if (uVar8 < uVar6) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
  }
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0xe0) + 0x20) + 0x135) & 1) == 0) {
    FUN_03f95a6c();
  }
  iVar5 = MessagePack_MessagePackPrimitives__TryReadStringHeader
                    (lVar1 + (int)uVar6,uVar8 - uVar6,param_2,&local_34);
  if (iVar5 == 0) {
    FUN_042658c0(param_1,(long)local_34,DAT_091b9f90);
    uVar6 = 1;
  }
  else {
    uVar6 = MessagePack_MessagePackReader__<TryGetStringLengthInBytes>g__SlowPath_57_0
                      (param_1,iVar5,param_2,&local_34);
  }
  return uVar6 & 1;
}

