// rea decompile_all
// name: FUN_073b5d4c
// address: 0x73b5d4c
// body: available
// range: 0x73b5d4c-0x73b5ea7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73b5e14 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73b5ea4 to 0x4d45728 FUN_04d45728 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_073b5d4c(long param_1,undefined2 *param_2,long param_3)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_03f5c2a4(&DAT_091d3020);
    FUN_03f5c2a4(&DAT_091b9798);
    FUN_03f5c2a4(&DAT_091b9f90);
    FUN_03f5c2a4(&DAT_091b9ff8);
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_03f95ac8(param_3);
    }
  }
  lVar5 = DAT_091b9ff8;
  lVar6 = *(long *)(DAT_091b9ff8 + 0x20);
  uVar2 = *(ushort *)(lVar6 + 0x135);
  if ((uVar2 & 1) == 0) {
    FUN_03f95a6c();
    lVar6 = *(long *)(lVar5 + 0x20);
    uVar2 = *(ushort *)(lVar6 + 0x135);
  }
  lVar1 = *(long *)(param_1 + 0x60);
  uVar8 = *(undefined8 *)(param_1 + 0x68);
  if ((uVar2 & 1) == 0) {
    FUN_03f95a6c();
    lVar6 = *(long *)(lVar5 + 0x20);
    uVar2 = *(ushort *)(lVar6 + 0x135);
  }
  uVar3 = *(uint *)(param_1 + 0x70);
  if ((uVar2 & 1) == 0) {
    lVar6 = FUN_03f95a6c();
  }
  uVar9 = (uint)uVar8;
  if (uVar9 < uVar3) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
  }
  if ((*(ushort *)(*(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0xe0) + 0x20) + 0x135) & 1) == 0) {
    FUN_03f95a6c();
  }
  iVar4 = uVar9 - uVar3;
  if (1 < iVar4) {
    puVar7 = (undefined2 *)FUN_04c072ac(lVar1 + (int)uVar3,iVar4,DAT_091d3020);
    uVar8 = DAT_091b9f90;
    *param_2 = *puVar7;
    FUN_042658c0(param_1,2,uVar8);
    return 1;
  }
  uVar8 = FUN_04d45728(param_1,param_2,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x10));
  return uVar8;
}

