// rea decompile_all
// name: _GAME.GameUI.PopupController$$AddPrefab
// address: 0x774b7d0
// body: available
// range: 0x774b7d0-0x774b9db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x774b9d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x774b9d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_GameUI_PopupController__AddPrefab(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_09522b70 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3d58);
    FUN_03f5c2a4(&DAT_091a3d60);
    FUN_03f5c2a4(&DAT_091a3d68);
    FUN_03f5c2a4(&DAT_091af1d0);
    FUN_03f5c2a4(&DAT_091af1e0);
    FUN_03f5c2a4(&DAT_091af1e8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189468);
    DAT_09522b70 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if (param_1 != 0) {
    FUN_057e185c(&local_78,param_1,DAT_091af1e8);
    local_50 = local_68;
    uStack_58 = puStack_70;
    local_60 = local_78;
    local_78 = 0;
    puStack_70 = &local_60;
LAB_0774b8c8:
    uVar3 = FUN_071bd28c(&local_60,DAT_091a3d60);
    uVar2 = local_50;
    if ((uVar3 & 1) != 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(DAT_09189468 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar4 = *(long *)(*(long *)(DAT_09189468 + 0xb8) + 8);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar3 = FUN_057e1004(lVar4,uVar2,DAT_091af1e0);
        if ((uVar3 & 1) == 0) {
          if (*(int *)(DAT_09189468 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar4 = DAT_091af1d0;
          lVar5 = *(long *)(*(long *)(DAT_09189468 + 0xb8) + 8);
          if (lVar5 != 0) {
            lVar6 = *(long *)(lVar5 + 0x10);
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar6 != 0) {
              uVar1 = *(uint *)(lVar5 + 0x18);
              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                puVar7 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                *puVar7 = uVar2;
                thunk_FUN_03f5d7b8(puVar7,uVar2);
              }
              else {
                FUN_057e0c68(lVar5,uVar2,
                             *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
              goto LAB_0774b8c8;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      goto LAB_0774b8c8;
    }
    FUN_071bd288(&local_60,DAT_091a3d58);
  }
  return;
}

