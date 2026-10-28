// rea decompile_all
// name: Lean.Common.LeanScreenQuery$$DoRaycastUI
// address: 0x7345e0c
// body: available
// range: 0x7345e0c-0x7346223 inclusive
// range: 0x73462a8-0x73462ab inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x734620c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7346220 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73462a8 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Common_LeanScreenQuery__DoRaycastUI
               (undefined4 param_1,undefined4 param_2,long param_3,undefined8 *param_4,
               float *param_5,undefined8 *param_6)

{
  long lVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  long local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_13c [36];
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if ((DAT_095206e3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c7068);
    FUN_03f5c2a4(&DAT_09183140);
    FUN_03f5c2a4(&DAT_091a3f20);
    FUN_03f5c2a4(&DAT_091a3f28);
    FUN_03f5c2a4(&DAT_091a3f30);
    FUN_03f5c2a4(&DAT_09184280);
    FUN_03f5c2a4(&DAT_091876f8);
    FUN_03f5c2a4(&DAT_091af5b8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091893a8);
    DAT_095206e3 = 1;
  }
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_94 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if (*(int *)(DAT_09184280 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = UnityEngine_EventSystems_EventSystem__get_current(0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar6 = UnityEngine_Object__op_Equality(lVar5,0,0);
  if ((uVar6 & 1) != 0) {
    if (*(int *)(DAT_09183140 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = FUN_04a7c57c(0,DAT_091c7068);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Inequality(lVar5,0,0);
  if ((uVar6 & 1) == 0) {
LAB_073461c8:
    if (*(long *)(lVar1 + 0x28) == local_78) {
      return;
    }
  }
  else {
    if (*(int *)(DAT_091876f8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar11 = *(undefined8 *)(*(long *)(DAT_091876f8 + 0xb8) + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar6 = UnityEngine_Object__op_Inequality(lVar5,uVar11,0);
    if ((uVar6 & 1) == 0) {
LAB_073460a4:
      if (*(int *)(DAT_091876f8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar10 = DAT_091876f8;
      lVar9 = *(long *)(*(long *)(DAT_091876f8 + 0xb8) + 0x18);
      if (lVar9 != 0) {
        *(undefined4 *)(lVar9 + 0x144) = param_1;
        *(undefined4 *)(lVar9 + 0x148) = param_2;
        if (lVar5 != 0) {
          UnityEngine_EventSystems_EventSystem__RaycastAll
                    (lVar5,*(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x18),
                     *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x10),0);
          lVar5 = *(long *)(*(long *)(DAT_091876f8 + 0xb8) + 0x10);
          if (lVar5 != 0) {
            FUN_05843780(&local_1c0,lVar5,DAT_091af5b8);
            do {
              uVar6 = FUN_071dc27c(&local_1c0,DAT_091a3f28);
              lVar5 = local_1b0;
              if ((uVar6 & 1) == 0) goto LAB_073461b4;
              fVar2 = (float)local_1a0;
              memcpy(&local_e0,(void *)((long)&local_1a0 + 4),0x5c);
              if (lVar5 == 0) {
                if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                goto LAB_073462a8;
              }
              uVar3 = UnityEngine_GameObject__get_layer(lVar5,0);
              uVar4 = UnityEngine_LayerMask__op_Implicit(*(undefined4 *)(param_3 + 4),0);
            } while ((uVar4 >> (ulong)(uVar3 & 0x1f) & 1) == 0);
            if (fVar2 < *param_5) {
              *param_5 = fVar2;
              uVar11 = UnityEngine_GameObject__get_transform(lVar5,0);
              *param_4 = uVar11;
              thunk_FUN_03f5d7b8(param_4);
              memcpy(auStack_13c,&local_e0,0x5c);
              *param_6 = local_118;
              *(undefined4 *)(param_6 + 1) = local_110;
            }
LAB_073461b4:
            FUN_071dc278(&local_1c0,DAT_091a3f20);
            goto LAB_073461c8;
          }
        }
      }
    }
    else {
      if (*(int *)(DAT_091876f8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar7 = (long *)(*(long *)(DAT_091876f8 + 0xb8) + 0x20);
      *plVar7 = lVar5;
      thunk_FUN_03f5d7b8(plVar7,lVar5);
      lVar10 = *(long *)(DAT_091876f8 + 0xb8);
      plVar7 = *(long **)(lVar10 + 0x18);
      if (plVar7 == (long *)0x0) {
        if (*(int *)(DAT_091876f8 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar10 = *(long *)(DAT_091876f8 + 0xb8);
        }
        uVar12 = *(undefined8 *)(lVar10 + 0x20);
        uVar11 = thunk_FUN_03f9944c(DAT_091893a8);
        UnityEngine_EventSystems_PointerEventData___ctor(uVar11,uVar12,0);
        puVar8 = (undefined8 *)(*(long *)(DAT_091876f8 + 0xb8) + 0x18);
        *puVar8 = uVar11;
        thunk_FUN_03f5d7b8(puVar8,uVar11);
        goto LAB_073460a4;
      }
      if (*(int *)(DAT_091876f8 + 0xe4) != 0) {
LAB_07346048:
        (**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
        goto LAB_073460a4;
      }
      FUN_03f5c424();
      plVar7 = *(long **)(*(long *)(DAT_091876f8 + 0xb8) + 0x18);
      if (plVar7 != (long *)0x0) goto LAB_07346048;
    }
    if (*(long *)(lVar1 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
LAB_073462a8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

