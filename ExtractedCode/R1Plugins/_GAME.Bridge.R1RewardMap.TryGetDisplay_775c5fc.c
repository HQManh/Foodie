// rea decompile_all
// name: _GAME.Bridge.R1RewardMap$$TryGetDisplay
// address: 0x775c5fc
// body: available
// range: 0x775c5fc-0x775c7af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x775c7ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _GAME_Bridge_R1RewardMap__TryGetDisplay
               (undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 local_3c;
  long *local_38;
  
  if ((DAT_09522c69 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186500);
    FUN_03f5c2a4(&DAT_09189978);
    DAT_09522c69 = 1;
  }
  local_38 = (long *)0x0;
  local_3c = 0;
  *param_2 = 0;
  thunk_FUN_03f5d7b8(param_2,0);
  *param_3 = 0;
  thunk_FUN_03f5d7b8(param_3,0);
  if (*(int *)(DAT_09189978 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = _GAME_Bridge_R1RewardMap__TryGetInfo(param_1,&local_38,&local_3c);
  plVar2 = local_38;
  if ((uVar3 & 1) == 0) {
LAB_0775c794:
    return uVar3 & 1;
  }
  if (local_38 != (long *)0x0) {
    lVar6 = *local_38;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09186500) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 5) * 0x10 + 0x138);
          goto LAB_0775c6fc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(local_38,DAT_09186500,5);
LAB_0775c6fc:
    uVar5 = (*(code *)*puVar4)(plVar2,puVar4[1]);
    *param_2 = uVar5;
    thunk_FUN_03f5d7b8(param_2,uVar5);
    plVar2 = local_38;
    uVar1 = local_3c;
    if (local_38 != (long *)0x0) {
      lVar6 = *local_38;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_09186500) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 7) * 0x10 + 0x138);
            goto LAB_0775c774;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_38,DAT_09186500,7);
LAB_0775c774:
      uVar5 = (*(code *)*puVar4)(plVar2,uVar1,puVar4[1]);
      *param_3 = uVar5;
      thunk_FUN_03f5d7b8(param_3,uVar5);
      goto LAB_0775c794;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

