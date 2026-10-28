// rea decompile_all
// name: System.Collections.Hashtable$$ContainsKey
// address: 0x755e190
// body: available
// range: 0x755e190-0x755e307 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x755e2a4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x755e300 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x755e304 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Collections_Hashtable__ContainsKey(long *param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar6 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_0921df98);
    uVar8 = thunk_FUN_03fc39d4(&DAT_092065e8);
    System_ArgumentNullException___ctor(uVar6,uVar7,uVar8,0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091ce6f8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar7);
  }
  lVar15 = param_1[2];
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar16 = *(int *)(lVar15 + 0x18);
  uVar6 = (**(code **)(*param_1 + 0x338))(param_1,param_2,*(undefined8 *)(*param_1 + 0x340));
  uVar2 = (uint)uVar6 & 0x7fffffff;
  uVar4 = iVar16 - 1;
  uVar12 = 0;
  uVar14 = (uint)*(ulong *)(lVar15 + 0x18);
  if (uVar14 != 0) {
    uVar12 = uVar2 / uVar14;
  }
  uVar5 = 0;
  if (uVar4 != 0) {
    uVar5 = (uVar2 * 0x65) / uVar4;
  }
  uVar12 = uVar2 - uVar12 * uVar14;
  uVar10 = *(ulong *)(lVar15 + 0x18) & 0xffffffff;
  iVar16 = 1;
  while( true ) {
    if ((uint)uVar10 <= uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558(uVar6);
    }
    lVar13 = lVar15 + (long)(int)uVar12 * 0x18;
    lVar9 = *(long *)(lVar13 + 0x20);
    if (lVar9 == 0) {
      return 0;
    }
    uVar14 = *(uint *)(lVar13 + 0x30);
    uVar11 = uVar10;
    if ((uVar14 & 0x7fffffff) == uVar2) {
      uVar10 = (**(code **)(*param_1 + 0x378))
                         (param_1,lVar9,param_2,*(undefined8 *)(*param_1 + 0x380));
      if ((uVar10 & 1) != 0) {
        return 1;
      }
      uVar11 = *(ulong *)(lVar15 + 0x18);
      uVar10 = uVar11 & 0xffffffff;
    }
    uVar6 = 0;
    if (-1 < (int)uVar14) break;
    lVar9 = (long)(int)uVar12 + (ulong)((uVar2 * 0x65 - uVar5 * uVar4) + 1);
    iVar3 = 0;
    if (uVar10 != 0) {
      iVar3 = (int)(lVar9 / (long)uVar10);
    }
    uVar12 = (int)lVar9 - iVar3 * (int)uVar10;
    bVar1 = (int)uVar11 <= iVar16;
    iVar16 = iVar16 + 1;
    if (bVar1) {
      return 0;
    }
  }
  return 0;
}

