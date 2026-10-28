// rea decompile_all
// name: MessagePack.MessagePackReader$$ReadBoolean
// address: 0x738c144
// body: available
// range: 0x738c144-0x738c1c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x738c1c0 to 0x738e178 MessagePack.MessagePackReader$$ThrowNotEnoughBytesException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong MessagePack_MessagePackReader__ReadBoolean(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  int iStack_68;
  ushort auStack_64 [2];
  code *pcStack_60;
  char local_24 [4];
  
  if ((DAT_09520a93 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9fb8);
    DAT_09520a93 = 1;
  }
  local_24[0] = '\0';
  uVar7 = FUN_0739d370(param_1,local_24,DAT_091b9fb8);
  if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    MessagePack_MessagePackReader__ThrowNotEnoughBytesException();
  }
  if (0xfd < (byte)(local_24[0] + 0x3cU)) {
    return (ulong)(local_24[0] != -0x3e);
  }
  lVar8 = MessagePack_MessagePackReader__ThrowInvalidCode();
  pcStack_60 = MessagePack_MessagePackReader__ReadUInt16;
  if ((DAT_09520aa5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9f90);
    FUN_03f5c2a4(&DAT_091b9ff8);
    DAT_09520aa5 = 1;
  }
  lVar5 = DAT_091b9ff8;
  auStack_64[0] = 0;
  iStack_68 = 0;
  lVar9 = *(long *)(DAT_091b9ff8 + 0x20);
  uVar3 = *(ushort *)(lVar9 + 0x135);
  if ((uVar3 & 1) == 0) {
    FUN_03f95a6c();
    lVar9 = *(long *)(lVar5 + 0x20);
    uVar3 = *(ushort *)(lVar9 + 0x135);
  }
  lVar1 = *(long *)(lVar8 + 0x60);
  uVar2 = *(undefined8 *)(lVar8 + 0x68);
  if ((uVar3 & 1) == 0) {
    FUN_03f95a6c();
    lVar9 = *(long *)(lVar5 + 0x20);
    uVar3 = *(ushort *)(lVar9 + 0x135);
  }
  uVar4 = *(uint *)(lVar8 + 0x70);
  if ((uVar3 & 1) == 0) {
    lVar9 = FUN_03f95a6c();
  }
  uVar10 = (uint)uVar2;
  if (uVar10 < uVar4) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
  }
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0xe0) + 0x20) + 0x135) & 1) == 0) {
    FUN_03f95a6c();
  }
  iVar6 = MessagePack_MessagePackPrimitives__TryReadUInt16
                    (lVar1 + (int)uVar4,uVar10 - uVar4,auStack_64,&iStack_68);
  if (iVar6 == 0) {
    FUN_042658c0(lVar8,(long)iStack_68,DAT_091b9f90);
    uVar7 = (ulong)auStack_64[0];
  }
  else {
    uVar7 = MessagePack_MessagePackReader__<ReadUInt16>g__SlowPath_64_0
                      (lVar8,iVar6,auStack_64[0],&iStack_68);
  }
  return uVar7;
}

