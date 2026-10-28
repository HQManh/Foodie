// rea decompile_all
// name: AnhPD.FoodOrder.FCustomerLineHandle$$OnDrawGizmosSelected
// address: 0x4214354
// body: available
// range: 0x4214354-0x421462b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4214624 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4214628 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FCustomerLineHandle__OnDrawGizmosSelected(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  ulong uVar6;
  undefined8 uVar7;
  float in_s3;
  float fVar8;
  float fVar9;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 *puStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  
  if ((DAT_09516ca2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2c60);
    FUN_03f5c2a4(&DAT_091a2c68);
    FUN_03f5c2a4(&DAT_091a2c70);
    FUN_03f5c2a4(&DAT_091acac8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09516ca2 = 1;
  }
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  lVar2 = AnhPD_FoodOrder_FCustomerLineHandle__GizmoLayout(param_1);
  lVar3 = UnityEngine_Component__get_transform(param_1,0);
  if (lVar3 != 0) {
    UnityEngine_Transform__get_localToWorldMatrix(&local_f0,lVar3,0);
    uStack_128 = puStack_e8;
    local_130 = local_f0;
    uStack_118 = uStack_d8;
    uStack_120 = uStack_e0;
    uStack_108 = uStack_c8;
    local_110 = local_d0;
    uStack_f8 = uStack_b8;
    uStack_100 = uStack_c0;
    UnityEngine_Gizmos__set_matrix(&local_130,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_057e185c(&local_148,*(long *)(param_1 + 0x20),DAT_091acac8);
      puStack_e8 = &local_b0;
      local_a0 = local_138;
      uStack_a8 = uStack_140;
      local_b0 = local_148;
      local_f0 = 0;
      uVar6 = uStack_e0;
      uVar7 = uStack_c0;
      while( true ) {
        do {
          uVar4 = FUN_071bd28c(&local_b0,DAT_091a2c68);
          uVar1 = local_a0;
          if ((uVar4 & 1) == 0) {
            FUN_071bd288(&local_b0,DAT_091a2c60);
            AnhPD_FoodOrder_FCustomerLineHandle__DrawWaitingGizmos(param_1,lVar2);
            AnhPD_FoodOrder_FCustomerLineHandle__DrawOrderCursorGizmo(param_1,lVar2);
            if (DAT_09516ccb == '\0') {
              FUN_03f5c2a4(&DAT_09187ec0);
              DAT_09516ccb = '\x01';
            }
            lVar2 = *(long *)(DAT_09187ec0 + 0xb8);
            uStack_188 = *(undefined8 *)(lVar2 + 0x48);
            local_190 = *(undefined8 *)(lVar2 + 0x40);
            uStack_178 = *(undefined8 *)(lVar2 + 0x58);
            uStack_180 = *(undefined8 *)(lVar2 + 0x50);
            uStack_168 = *(undefined8 *)(lVar2 + 0x68);
            local_170 = *(undefined8 *)(lVar2 + 0x60);
            uStack_158 = *(undefined8 *)(lVar2 + 0x78);
            uStack_160 = *(undefined8 *)(lVar2 + 0x70);
            UnityEngine_Gizmos__set_matrix(&local_190,0);
            return;
          }
          fVar8 = in_s3;
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
            fVar8 = in_s3;
          }
          uVar4 = UnityEngine_Object__op_Implicit(uVar1,0);
          fVar9 = (float)uVar6;
          in_s3 = fVar8;
        } while ((uVar4 & 1) == 0);
        if (lVar2 == 0) break;
        in_s3 = (float)uVar7;
        fVar5 = (float)AnhPD_FoodOrder_CustomerLineLayout__GetLineLocalRect(lVar2,uVar1);
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Gizmos__set_color(0,0x3f800000,0x3f800000,0x3e3851ec,0);
        fVar9 = fVar9 + fVar8 * 0.5;
        fVar5 = fVar5 + in_s3 * 0.5;
        UnityEngine_Gizmos__DrawCube(fVar5,fVar9,0,in_s3,fVar8,0x3c23d70a,0);
        UnityEngine_Gizmos__set_color(0,0x3f800000,0x3f800000,0x3f4ccccd,0);
        uVar7 = 0;
        uVar6 = (ulong)(uint)fVar9;
        UnityEngine_Gizmos__DrawWireCube(fVar5,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

