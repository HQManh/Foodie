// rea decompile_all
// name: CakeOrder.PopupMinigame.InputMiniScene$$TriggerRaycastInputMouseDown
// address: 0x43791ec
// body: available
// range: 0x43791ec-0x4379487 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4379484 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_PopupMinigame_InputMiniScene__TriggerRaycastInputMouseDown
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  float fStack_c8;
  float local_c4;
  float fStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float local_ac;
  float fStack_a8;
  undefined8 uStack_a4;
  undefined4 local_9c;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  if ((DAT_09517925 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c58b8);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091ab7d8);
    FUN_03f5c2a4(&DAT_091ab7e8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517925 = 1;
  }
  local_70 = 0;
  local_98 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (*(long *)(param_4 + 0x28) != 0) {
    UnityEngine_Camera__ViewportPointToRay
              (&local_bc,param_1,param_2,param_3,*(long *)(param_4 + 0x28),0);
    fVar7 = fStack_a8;
    fVar6 = local_ac;
    fVar5 = fStack_b0;
    uVar4 = uStack_b4;
    uVar3 = uStack_b8;
    uVar2 = local_bc;
    fVar14 = fStack_b0 * 100.0;
    fVar15 = local_ac * 100.0;
    fVar16 = fStack_a8 * 100.0;
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__DrawRay(uVar2,uVar3,uVar4,fVar14,fVar15,fVar16,0);
    local_d4 = uVar2;
    uStack_d0 = uVar3;
    local_cc = uVar4;
    fStack_c8 = fVar5;
    local_c4 = fVar6;
    fStack_c0 = fVar7;
    UnityEngine_PhysicsScene2D__GetRayIntersection
              (&local_bc,0x7f800000,param_4 + 0x30,&local_d4,0xfffffffb,0);
    uStack_88 = CONCAT44(fStack_b0,uStack_b4);
    local_90 = CONCAT44(uStack_b8,local_bc);
    uStack_80 = CONCAT44(fStack_a8,local_ac);
    uStack_78 = uStack_a4;
    local_70 = local_9c;
    uVar8 = UnityEngine_RaycastHit2D__get_collider(&local_90,0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar9 = UnityEngine_Object__op_Implicit(uVar8,0);
    if ((uVar9 & 1) == 0) {
      return;
    }
    lVar10 = UnityEngine_RaycastHit2D__get_collider(&local_90,0);
    if (lVar10 != 0) {
      uVar9 = FUN_04a6b048(lVar10,&local_98,DAT_091c58b8);
      if ((uVar9 & 1) == 0) {
        return;
      }
      if (*(long *)(param_4 + 0x38) != 0) {
        uVar9 = FUN_057e1004(*(long *)(param_4 + 0x38),local_98,DAT_091ab7e8);
        lVar10 = DAT_091ab7d8;
        if ((uVar9 & 1) != 0) {
          return;
        }
        lVar11 = *(long *)(param_4 + 0x38);
        if (lVar11 != 0) {
          lVar12 = *(long *)(lVar11 + 0x10);
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar12 != 0) {
            uVar1 = *(uint *)(lVar11 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
              plVar13 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
              *plVar13 = local_98;
              thunk_FUN_03f5d7b8(plVar13);
            }
            else {
              FUN_057e0c68(lVar11,local_98,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            if (local_98 != 0) {
              if (*(char *)(local_98 + 0x20) != '\0') {
                return;
              }
              lVar10 = *(long *)(local_98 + 0x28);
              *(undefined1 *)(local_98 + 0x20) = 1;
              if (lVar10 == 0) {
                return;
              }
              (**(code **)(lVar10 + 0x18))
                        (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28));
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

