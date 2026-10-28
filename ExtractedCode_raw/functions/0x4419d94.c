// rea decompile_all
// name: CookingGraph.EstimatorBotScorer$$IngredientsOf
// address: 0x4419d94
// body: available
// range: 0x4419d94-0x441a0fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4419f60 to 0x4b0cafc FUN_04b0cafc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x441a084 to 0x4aeb458 FUN_04aeb458 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x441a0f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookingGraph_EstimatorBotScorer__IngredientsOf(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  
  if ((DAT_09517f10 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c99b8);
    FUN_03f5c2a4(&DAT_091c9c20);
    FUN_03f5c2a4(&DAT_091ca158);
    FUN_03f5c2a4(&DAT_091cb4d8);
    FUN_03f5c2a4(&DAT_091784d8);
    FUN_03f5c2a4(&DAT_09178ae8);
    FUN_03f5c2a4(&DAT_091ada38);
    FUN_03f5c2a4(&DAT_091ab568);
    FUN_03f5c2a4(&DAT_091ab570);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e9b90);
    FUN_03f5c2a4(&DAT_091e9bf8);
    FUN_03f5c2a4(&DAT_091906b8);
    FUN_03f5c2a4(&DAT_09190660);
    DAT_09517f10 = 1;
  }
  lVar4 = thunk_FUN_03f9944c(DAT_091906b8);
  System_Object___ctor(lVar4,0);
  if (lVar4 == 0) goto LAB_0441a0f8;
  plVar10 = (long *)(lVar4 + 0x10);
  *plVar10 = param_2;
  thunk_FUN_03f5d7b8(plVar10,param_2);
  lVar6 = *plVar10;
  if (lVar6 == 0) goto LAB_0441a0f8;
  lVar8 = *(long *)(lVar6 + 0x28);
  if ((lVar8 != 0) && (0 < *(int *)(lVar8 + 0x18))) {
    if (*(int *)(DAT_09190660 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar7 = *(undefined8 **)(DAT_09190660 + 0xb8);
    lVar4 = puVar7[9];
    if (lVar4 == 0) {
      if (*(int *)(DAT_09190660 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar7 = *(undefined8 **)(DAT_09190660 + 0xb8);
      }
      uVar9 = *puVar7;
      lVar4 = thunk_FUN_03f9944c(DAT_09178ae8);
      FUN_05322d94(lVar4,uVar9,DAT_091e9b90,0);
      plVar10 = (long *)(*(long *)(DAT_09190660 + 0xb8) + 0x48);
      *plVar10 = lVar4;
      thunk_FUN_03f5d7b8(plVar10,lVar4);
    }
    uVar9 = FUN_04b0cafc(lVar8,lVar4,DAT_091cb4d8);
    return uVar9;
  }
  iVar1 = *(int *)(lVar6 + 0x10);
  if (iVar1 < 0) goto LAB_0441a088;
  if (param_3 == 0) goto LAB_0441a0f8;
  lVar6 = *(long *)(param_3 + 0x28);
  if ((lVar6 == 0) || (*(int *)(lVar6 + 0x18) <= iVar1)) goto LAB_0441a088;
  lVar6 = FUN_057e0998(lVar6,iVar1,DAT_091ab570);
  if (lVar6 == 0) {
    lVar6 = 0;
LAB_04419ffc:
    uVar9 = 0;
    bVar2 = true;
  }
  else {
    lVar8 = *(long *)(lVar6 + 0x10);
    lVar6 = 0;
    if (lVar8 == 0) goto LAB_04419ffc;
    uVar9 = thunk_FUN_03f9944c(DAT_091784d8);
    FUN_05322d94(uVar9,lVar4,DAT_091e9bf8,0);
    lVar6 = FUN_04ae5fd0(lVar8,uVar9,DAT_091c9c20);
    if (lVar6 == 0) goto LAB_04419ffc;
    uVar9 = *(undefined8 *)(lVar6 + 0x20);
    bVar2 = false;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar9,0,0);
  if ((uVar5 & 1) == 0) {
LAB_0441a088:
    lVar4 = DAT_091c99b8;
    lVar6 = *(long *)(DAT_091c99b8 + 0x38);
    if (lVar6 == 0) {
      FUN_03f95ac8(DAT_091c99b8);
      lVar6 = *(long *)(lVar4 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    return **(undefined8 **)(lVar4 + 0xb8);
  }
  if (!bVar2) {
    uVar9 = *(undefined8 *)(lVar6 + 0x20);
    uVar3 = *(undefined4 *)(lVar6 + 0x2c);
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Math__Max(1,uVar3,0);
    uVar9 = FUN_04aeb458(uVar9,uVar3,DAT_091ca158);
    return uVar9;
  }
LAB_0441a0f8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

