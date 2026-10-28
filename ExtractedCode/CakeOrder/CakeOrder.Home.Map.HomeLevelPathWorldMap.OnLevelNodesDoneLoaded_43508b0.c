// rea decompile_all
// name: CakeOrder.Home.Map.HomeLevelPathWorldMap$$OnLevelNodesDoneLoaded
// address: 0x43508b0
// body: available
// range: 0x43508b0-0x4350ac3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4350aa4 to 0x43503bc CakeOrder.Home.Map.HomeLevelPathWorldMap$$ChangeHighlight (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4350ac0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Map_HomeLevelPathWorldMap__OnLevelNodesDoneLoaded(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if ((DAT_095177b4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095177b4 = 1;
  }
  if ((param_2 == 0) || (*(long *)(param_1 + 0x20) == 0)) goto LAB_04350ac0;
  uVar1 = System_String__op_Equality
                    (*(undefined8 *)(param_2 + 0x20),
                     *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x68),0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_04350ac0;
    if (-1 < *(int *)(*(long *)(param_1 + 0x20) + 0x70)) {
      if (*(long *)(param_2 + 0x40) == 0) goto LAB_04350ac0;
      lVar2 = CakeOrder_Home_Map_HomeLevelPathNodesControl__GetNode();
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar1 = UnityEngine_Object__op_Implicit(lVar2,0);
      if ((uVar1 & 1) != 0) {
        if (((*(long *)(param_1 + 0x58) == 0) ||
            (lVar3 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x58),0), lVar2 == 0))
           || (lVar3 == 0)) goto LAB_04350ac0;
        UnityEngine_Transform__SetParent(lVar3,*(undefined8 *)(lVar2 + 0xa8),0);
        if (*(long *)(param_1 + 0x58) == 0) goto LAB_04350ac0;
        lVar2 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x58),0);
        if (DAT_09515ce6 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515ce6 = '\x01';
        }
        puVar5 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
        uVar6 = *puVar5;
        uVar7 = puVar5[1];
        uVar8 = puVar5[2];
        if (DAT_09515ed5 == '\0') {
          FUN_03f5c2a4(&DAT_091898c0);
          DAT_09515ed5 = '\x01';
        }
        if (lVar2 == 0) goto LAB_04350ac0;
        puVar5 = *(undefined4 **)(DAT_091898c0 + 0xb8);
        UnityEngine_Transform__SetLocalPositionAndRotation
                  (uVar6,uVar7,uVar8,*puVar5,puVar5[1],puVar5[2],puVar5[3],lVar2,0);
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_04350ac0;
        CakeOrder_Home_Map_HomeLevelPathWorldMap__Focus
                  (param_1,*(undefined4 *)(param_2 + 0x28),
                   *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x70));
        if ((*(long *)(param_1 + 0x50) == 0) ||
           (plVar4 = *(long **)(param_1 + 0x58), plVar4 == (long *)0x0)) goto LAB_04350ac0;
        (**(code **)(*plVar4 + 0x188))
                  (*(undefined4 *)(*(long *)(param_1 + 0x50) + 0x14),plVar4,0,
                   *(undefined8 *)(*plVar4 + 400));
      }
    }
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = System_String__op_Equality
                      (*(undefined8 *)(param_2 + 0x20),
                       *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),0);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      if (lVar2 == 0) goto LAB_04350ac0;
      if (-1 < *(int *)(lVar2 + 0x2c)) {
        CakeOrder_Home_Map_HomeLevelPathWorldMap__ChangeHighlight
                  (param_1,*(undefined8 *)(lVar2 + 0x20),*(int *)(lVar2 + 0x2c),0);
        return;
      }
    }
    return;
  }
LAB_04350ac0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

