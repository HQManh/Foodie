// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$ResolveGridEffect
// address: 0x4472ff8
// body: available
// range: 0x4472ff8-0x44732ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4473260 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44732a8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__ResolveGridEffect
               (undefined8 *param_1,long param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_50;
  undefined8 uStack_48;
  int local_3c;
  long local_38;
  
  if ((DAT_0951806f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d990);
    FUN_03f5c2a4(&DAT_0919cb30);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091b6f98);
    FUN_03f5c2a4(&DAT_091b6fc0);
    DAT_0951806f = 1;
  }
  local_3c = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_38 = param_3;
  thunk_FUN_03f5d7b8(&local_38,param_3);
  local_3c = 0;
  local_50 = 0;
  uStack_48 = 0;
  if (local_38 != 0) {
    uVar1 = *(uint *)(local_38 + 0x10);
    if ((int)uVar1 < 3) {
      if (uVar1 < 2) {
        uVar3 = 0;
      }
      else {
        if (uVar1 != 2) {
LAB_04473264:
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar6 = thunk_FUN_03f9944c();
          uVar7 = thunk_FUN_03fc39d4(&DAT_092126d0);
          System_ArgumentException___ctor(uVar6,uVar7,0);
          uVar7 = thunk_FUN_03fc39d4(&DAT_091c6880);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar6,uVar7);
        }
        uVar3 = CookingGraph_CookingLevelSimulation__<ResolveGridEffect>g__P_283_0(0,0,&local_38);
        local_3c = *(int *)(param_2 + 0x168);
      }
    }
    else if (uVar1 == 3) {
      uVar3 = CookingGraph_CookingLevelSimulation__<ResolveGridEffect>g__P_283_0(0,0,&local_38);
      FUN_05c3078c(&uStack_48,uVar3,DAT_091b6f98);
      uVar3 = CookingGraph_CookingLevelSimulation__<ResolveGridEffect>g__P_283_0(1,1,&local_38);
      lVar8 = *(long *)(param_2 + 0xd8);
      uVar5 = FUN_05c307a4(&uStack_48,DAT_091b6fc0);
      if (lVar8 == 0) goto LAB_04473260;
      FUN_06ee7aac(lVar8,uVar5,&local_3c,DAT_0919d990);
    }
    else {
      if (uVar1 != 4) goto LAB_04473264;
      uVar3 = CookingGraph_CookingLevelSimulation__<ResolveGridEffect>g__P_283_0(0,0,&local_38);
      FUN_05c3078c(&local_50,uVar3,DAT_091b6f98);
      uVar3 = CookingGraph_CookingLevelSimulation__<ResolveGridEffect>g__P_283_0(1,1,&local_38);
      if (*(long *)(param_2 + 0xe0) == 0) goto LAB_04473260;
      FUN_06fcbf70(*(long *)(param_2 + 0xe0),local_38,&local_3c,DAT_0919cb30);
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar4 = System_Math__Max(0,uVar3,0);
    uVar7 = uStack_48;
    uVar6 = local_50;
    if (local_38 != 0) {
      uVar3 = *(undefined4 *)(local_38 + 0x10);
      uVar5 = System_Math__Max(0,iVar4 - local_3c,0);
      if (local_38 != 0) {
        iVar2 = *(int *)(local_38 + 0x10);
        param_1[1] = 0;
        *param_1 = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        CookingGraph_CookingGridEffectSnapshot___ctor
                  (param_1,uVar3,uVar7,uVar6,iVar4,uVar5,iVar2 != 1 && iVar4 <= local_3c,0);
        return;
      }
    }
  }
LAB_04473260:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

