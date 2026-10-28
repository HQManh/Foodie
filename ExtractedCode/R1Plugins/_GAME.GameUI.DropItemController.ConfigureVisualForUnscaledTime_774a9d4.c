// rea decompile_all
// name: _GAME.GameUI.DropItemController$$ConfigureVisualForUnscaledTime
// address: 0x774a9d4
// body: available
// range: 0x774a9d4-0x774ac3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x774ac38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x774ac3c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_GameUI_DropItemController__ConfigureVisualForUnscaledTime(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 local_38;
  
  if ((DAT_09522bb9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cdba0);
    FUN_03f5c2a4(&DAT_091cdbb0);
    FUN_03f5c2a4(&DAT_091cdbd0);
    FUN_03f5c2a4(&DAT_091cdbd8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dc040);
    DAT_09522bb9 = 1;
  }
  local_38 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(param_1,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if ((param_1 != 0) && (lVar3 = FUN_04b7ceb4(param_1,1,DAT_091cdba0), lVar3 != 0)) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      lVar6 = 0;
      do {
        if (uVar1 <= (uint)lVar6) goto LAB_0774ac3c;
        lVar4 = *(long *)(lVar3 + 0x20 + lVar6 * 8);
        if (lVar4 == 0) goto LAB_0774ac38;
        UnityEngine_Animator__set_updateMode(lVar4,2,0);
        uVar1 = *(uint *)(lVar3 + 0x18);
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < (int)uVar1);
    }
    lVar3 = FUN_04b7ceb4(param_1,1,DAT_091cdbb0);
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (0 < (int)uVar1) {
        uVar5 = 0;
        do {
          if (uVar1 <= uVar5) goto LAB_0774ac3c;
          lVar6 = *(long *)(lVar3 + (long)(int)uVar5 * 8 + 0x20);
          if (lVar6 == 0) goto LAB_0774ac38;
          *(undefined1 *)(lVar6 + 0xaa) = 1;
          if ((*(long *)(lVar6 + 0x68) != 0) &&
             (uVar2 = DG_Tweening_TweenExtensions__IsActive(*(long *)(lVar6 + 0x68),0),
             (uVar2 & 1) != 0)) {
            FUN_04d9656c(*(undefined8 *)(lVar6 + 0x68),1,DAT_091dc040);
          }
          uVar1 = *(uint *)(lVar3 + 0x18);
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)uVar1);
      }
      lVar3 = FUN_04b7ceb4(param_1,1,DAT_091cdbd8);
      if (lVar3 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (0 < (int)uVar1) {
          lVar6 = 0;
          do {
            if (uVar1 <= (uint)lVar6) goto LAB_0774ac3c;
            lVar4 = *(long *)(lVar3 + 0x20 + lVar6 * 8);
            if (lVar4 == 0) goto LAB_0774ac38;
            local_38 = UnityEngine_ParticleSystem__get_main(lVar4,0);
            UnityEngine_ParticleSystem_MainModule__set_useUnscaledTime(&local_38,1,0);
            uVar1 = *(uint *)(lVar3 + 0x18);
            lVar6 = lVar6 + 1;
          } while ((int)lVar6 < (int)uVar1);
        }
        lVar3 = FUN_04b7ceb4(param_1,1,DAT_091cdbd0);
        if (lVar3 != 0) {
          uVar1 = *(uint *)(lVar3 + 0x18);
          if ((int)uVar1 < 1) {
            return;
          }
          uVar5 = 0;
          do {
            if (uVar1 == uVar5) {
LAB_0774ac3c:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar6 = *(long *)(lVar3 + (long)(int)uVar5 * 8 + 0x20);
            if (lVar6 == 0) break;
            uVar5 = uVar5 + 1;
            *(undefined4 *)(lVar6 + 0xf4) = 0;
            if ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) == uVar5) {
              return;
            }
          } while( true );
        }
      }
    }
  }
LAB_0774ac38:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

