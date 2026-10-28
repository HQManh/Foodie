// rea decompile_all
// name: _GAME.Bridge.CookOrderBridge$$TryGetHomeIconSlot
// address: 0x7760bf4
// body: available
// range: 0x7760bf4-0x7761003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7760fec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7760ff0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7760ff8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7761000 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_GAME_Bridge_CookOrderBridge__TryGetHomeIconSlot
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
          long *param_5,undefined8 *param_6,undefined8 *param_7,float *param_8)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((DAT_09522c35 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d4af8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_092114c8);
    FUN_03f5c2a4(&DAT_092114d0);
    DAT_09522c35 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  local_78 = 0;
  *param_5 = 0;
  thunk_FUN_03f5d7b8(param_5,0);
  *param_6 = 0;
  param_6[1] = 0;
  *param_7 = 0;
  *param_8 = 0.0;
  uVar3 = _GAME_Bridge_CookOrderBridge__get_IsAtHome();
  if ((uVar3 & 1) != 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = FUN_04c34ed0(1,0,DAT_091d4af8);
    fVar16 = (float)param_3;
    fVar18 = (float)param_4;
    fVar14 = (float)param_2;
    if (lVar4 == 0) {
LAB_07760fec:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = *(uint *)(lVar4 + 0x18);
    if ((int)uVar2 < 1) {
      plVar9 = (long *)0x0;
      plVar8 = (long *)0x0;
    }
    else {
      uVar11 = 0;
      plVar8 = (long *)0x0;
      plVar9 = (long *)0x0;
      do {
        if (uVar2 <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar10 = *(long *)(lVar4 + (long)(int)uVar11 * 8 + 0x20);
        if (lVar10 == 0) goto LAB_07760fec;
        uVar5 = UnityEngine_Object__GetName(lVar10,0);
        uVar3 = System_String__op_Equality(uVar5,DAT_092114c8,0);
        if ((uVar3 & 1) == 0) {
          uVar5 = UnityEngine_Object__GetName(lVar10,0);
          uVar3 = System_String__op_Equality(uVar5,DAT_092114d0,0);
          if ((uVar3 & 1) != 0) {
            plVar8 = (long *)UnityEngine_Component__get_transform(lVar10,0);
          }
        }
        else {
          plVar9 = (long *)UnityEngine_Component__get_transform(lVar10,0);
        }
        fVar16 = (float)param_3;
        fVar18 = (float)param_4;
        fVar14 = (float)param_2;
        uVar2 = *(uint *)(lVar4 + 0x18);
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)uVar2);
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Equality(plVar9,0,0);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Equality(plVar8,0,0);
      if ((uVar3 & 1) == 0) {
        if ((plVar9 == (long *)0x0) ||
           (uVar5 = UnityEngine_Transform__GetParent(plVar9,0), plVar8 == (long *)0x0))
        goto LAB_07760fec;
        uVar6 = UnityEngine_Transform__GetParent(plVar8,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar5,uVar6,0);
        if ((uVar3 & 1) == 0) {
          plVar7 = (long *)UnityEngine_Transform__GetParent(plVar8,0);
          if (plVar7 == (long *)0x0) {
            plVar7 = (long *)0x0;
            *param_5 = 0;
          }
          else {
            plVar1 = plVar7;
            if (*plVar7 != DAT_09189c98) {
              plVar1 = (long *)0x0;
            }
            *param_5 = (long)plVar1;
            if (*plVar7 != DAT_09189c98) {
              plVar7 = (long *)0x0;
            }
          }
          thunk_FUN_03f5d7b8(param_5,plVar7);
          lVar4 = *param_5;
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Equality(lVar4,0,0);
          if ((((uVar3 & 1) == 0) &&
              (uVar3 = _GAME_Bridge_CookOrderBridge__TryGetIconRect(plVar9,*param_5,&local_70),
              (uVar3 & 1) != 0)) &&
             (uVar3 = _GAME_Bridge_CookOrderBridge__TryGetIconRect(plVar8,*param_5,&local_80),
             (uVar3 & 1) != 0)) {
            if (*plVar9 != DAT_09189c98) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(plVar9);
            }
            fVar12 = (float)_GAME_Bridge_CookOrderBridge__GetRectIn(plVar9,*param_5);
            if (*plVar8 != DAT_09189c98) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(plVar8);
            }
            fVar15 = fVar14;
            fVar19 = fVar18;
            fVar17 = fVar16;
            fVar13 = (float)_GAME_Bridge_CookOrderBridge__GetRectIn(plVar8,*param_5);
            if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            *(float *)(param_6 + 1) = fVar17;
            *(float *)((long)param_6 + 0xc) = fVar19;
            fVar22 = (float)((ulong)local_78 >> 0x20);
            fVar20 = (float)local_80 + (float)local_78 * 0.5;
            fVar21 = (float)((ulong)local_80 >> 0x20) + fVar22 * 0.5;
            *param_6 = CONCAT44(fVar15 + ((fVar15 + fVar19 * 0.5) - (fVar14 + fVar18 * 0.5)),
                                fVar13 + ((fVar13 + fVar17 * 0.5) - (fVar12 + fVar16 * 0.5)));
            *param_7 = CONCAT44(fVar21 + (fVar21 - ((float)((ulong)local_70 >> 0x20) +
                                                   (float)((ulong)local_68 >> 0x20) * 0.5)),
                                fVar20 + (fVar20 - ((float)local_70 + (float)local_68 * 0.5)));
            *param_8 = fVar22;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

