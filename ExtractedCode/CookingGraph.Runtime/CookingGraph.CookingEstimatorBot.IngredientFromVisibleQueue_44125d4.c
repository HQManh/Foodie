// rea decompile_all
// name: CookingGraph.CookingEstimatorBot$$IngredientFromVisibleQueue
// address: 0x44125d4
// body: available
// range: 0x44125d4-0x4412837 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4412808 to 0x4b08b78 FUN_04b08b78 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4412834 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CookingGraph_CookingEstimatorBot__IngredientFromVisibleQueue(long param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  if ((DAT_09517ee8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9c20);
    FUN_03f5c2a4(&DAT_091ca158);
    FUN_03f5c2a4(&DAT_091cb1e8);
    FUN_03f5c2a4(&DAT_091784d8);
    FUN_03f5c2a4(&DAT_091ad9e8);
    FUN_03f5c2a4(&DAT_091ab568);
    FUN_03f5c2a4(&DAT_091ab570);
    FUN_03f5c2a4(&DAT_0917c4a0);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e6c10);
    FUN_03f5c2a4(&DAT_0918eee8);
    DAT_09517ee8 = 1;
  }
  lVar4 = thunk_FUN_03f9944c(DAT_0918eee8);
  System_Object___ctor(lVar4,0);
  if (lVar4 == 0) goto LAB_04412834;
  plVar9 = (long *)(lVar4 + 0x10);
  *plVar9 = param_2;
  thunk_FUN_03f5d7b8(plVar9,param_2);
  if (*plVar9 == 0) goto LAB_04412834;
  iVar1 = *(int *)(*plVar9 + 0x10);
  if (iVar1 < 0) goto LAB_0441280c;
  if (param_1 == 0) goto LAB_04412834;
  lVar5 = *(long *)(param_1 + 0x28);
  if ((lVar5 == 0) || (*(int *)(lVar5 + 0x18) <= iVar1)) goto LAB_0441280c;
  lVar5 = FUN_057e0998(lVar5,iVar1,DAT_091ab570);
  if (lVar5 == 0) {
    lVar5 = 0;
LAB_04412770:
    uVar6 = 0;
    bVar2 = true;
  }
  else {
    lVar8 = *(long *)(lVar5 + 0x10);
    lVar5 = 0;
    if (lVar8 == 0) goto LAB_04412770;
    uVar6 = thunk_FUN_03f9944c(DAT_091784d8);
    FUN_05322d94(uVar6,lVar4,DAT_091e6c10,0);
    lVar5 = FUN_04ae5fd0(lVar8,uVar6,DAT_091c9c20);
    if (lVar5 == 0) goto LAB_04412770;
    uVar6 = *(undefined8 *)(lVar5 + 0x20);
    bVar2 = false;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if ((uVar7 & 1) == 0) {
LAB_0441280c:
    uVar6 = thunk_FUN_03f9944c(DAT_0917c4a0);
    FUN_057e0400(uVar6,DAT_091ad9e8);
    return uVar6;
  }
  if (!bVar2) {
    uVar6 = *(undefined8 *)(lVar5 + 0x20);
    uVar3 = *(undefined4 *)(lVar5 + 0x2c);
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Math__Max(1,uVar3,0);
    uVar6 = FUN_04aeb458(uVar6,uVar3,DAT_091ca158);
    uVar6 = FUN_04b08b78(uVar6,DAT_091cb1e8);
    return uVar6;
  }
LAB_04412834:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

