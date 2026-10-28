// rea decompile_all
// name: System.Collections.Hashtable$$get_Item
// address: 0x755e71c
// body: available
// range: 0x755e71c-0x755e933 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x755e8d0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x755e92c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x755e930 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Collections_Hashtable__get_Item(long *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  int iVar18;
  undefined4 local_64;
  
  if ((DAT_095219a1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918aef8);
    DAT_095219a1 = 1;
  }
  local_64 = 0;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar9 = thunk_FUN_03f9944c();
    uVar10 = thunk_FUN_03fc39d4(&DAT_0921df98);
    uVar11 = thunk_FUN_03fc39d4(&DAT_092065e8);
    System_ArgumentNullException___ctor(uVar9,uVar10,uVar11,0);
    uVar10 = thunk_FUN_03fc39d4(&DAT_091ce730);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar9,uVar10);
  }
  lVar15 = param_1[2];
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar16 = *(int *)(lVar15 + 0x18);
  uVar7 = (**(code **)(*param_1 + 0x338))(param_1,param_2,*(undefined8 *)(*param_1 + 0x340));
  uVar7 = uVar7 & 0x7fffffff;
  uVar3 = iVar16 - 1;
  uVar13 = *(uint *)(lVar15 + 0x18);
  iVar16 = 0;
  uVar4 = 0;
  if (uVar13 != 0) {
    uVar4 = uVar7 / uVar13;
  }
  uVar5 = 0;
  if (uVar3 != 0) {
    uVar5 = (uVar7 * 0x65) / uVar3;
  }
  uVar13 = uVar7 - uVar4 * uVar13;
  while( true ) {
    iVar18 = (int)param_1[5];
    local_64 = 0;
    thunk_FUN_03f6a5cc();
    if (*(uint *)(lVar15 + 0x18) <= uVar13) break;
    lVar14 = lVar15 + (long)(int)uVar13 * 0x18;
    while( true ) {
      lVar1 = *(long *)(lVar14 + 0x20);
      uVar9 = *(undefined8 *)(lVar14 + 0x28);
      uVar17 = *(ulong *)(lVar14 + 0x30);
      cVar2 = *(char *)((long)param_1 + 0x2c);
      thunk_FUN_03f6a5cc();
      if ((cVar2 == '\0') && (lVar6 = param_1[5], thunk_FUN_03f6a5cc(), iVar18 == (int)lVar6))
      break;
      if (*(int *)(DAT_0918aef8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Threading_SpinWait__SpinOnce(&local_64,0);
      iVar18 = (int)param_1[5];
      thunk_FUN_03f6a5cc();
      if (*(uint *)(lVar15 + 0x18) <= uVar13) goto LAB_0755e8d0;
    }
    if (lVar1 == 0) {
      return 0;
    }
    if (((uVar17 & 0x7fffffff) == (ulong)uVar7) &&
       (uVar8 = (**(code **)(*param_1 + 0x378))
                          (param_1,lVar1,param_2,*(undefined8 *)(*param_1 + 0x380)),
       (uVar8 & 1) != 0)) {
      return uVar9;
    }
    if (-1 < (int)uVar17) {
      return 0;
    }
    iVar16 = iVar16 + 1;
    lVar14 = (long)(int)uVar13 + (ulong)((uVar7 * 0x65 - uVar5 * uVar3) + 1);
    uVar17 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
    iVar12 = (int)*(ulong *)(lVar15 + 0x18);
    iVar18 = 0;
    if (uVar17 != 0) {
      iVar18 = (int)(lVar14 / (long)uVar17);
    }
    uVar13 = (int)lVar14 - iVar18 * iVar12;
    if (iVar12 <= iVar16) {
      return 0;
    }
  }
LAB_0755e8d0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

