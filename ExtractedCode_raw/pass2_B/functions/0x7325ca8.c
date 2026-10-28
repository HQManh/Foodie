// rea decompile_all
// name: IapAdsSystem.RemoteConfigManager$$Awake
// address: 0x7325ca8
// body: available
// range: 0x7325ca8-0x7325e9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7325e88 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7325e8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7325e90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7325e94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7325e98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_RemoteConfigManager__Awake(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  int *piVar6;
  long *plVar7;
  uint uVar8;
  undefined8 local_88;
  undefined8 *puStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  
  if ((DAT_095205d8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2d38);
    FUN_03f5c2a4(&DAT_091a2d40);
    FUN_03f5c2a4(&DAT_091a2d48);
    FUN_03f5c2a4(&DAT_091cdb58);
    FUN_03f5c2a4(&DAT_09186460);
    FUN_03f5c2a4(&DAT_091acd60);
    FUN_03f5c2a4(&DAT_091b4aa0);
    DAT_095205d8 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  FUN_05a8ee38(param_1,DAT_091b4aa0);
  if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_88,*(long *)(param_1 + 0x48),DAT_091acd60);
  local_60 = local_78;
  uStack_68 = puStack_80;
  local_70 = local_88;
  local_88 = 0;
  puStack_80 = &local_70;
  do {
    do {
      uVar1 = FUN_071bd28c(&local_70,DAT_091a2d40);
      if ((uVar1 & 1) == 0) {
        FUN_071bd288(&local_70,DAT_091a2d38);
        return;
      }
      if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = FUN_04b7cbb8(local_60,DAT_091cdb58);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = *(uint *)(lVar2 + 0x18);
    } while ((int)uVar4 < 1);
    uVar8 = 0;
    do {
      if (uVar4 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar7 = *(long **)(lVar2 + (long)(int)uVar8 * 8 + 0x20);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *plVar7;
      uVar1 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar1 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == DAT_09186460) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_07325e34;
          }
          uVar1 = uVar1 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09186460,0);
LAB_07325e34:
      (*(code *)*puVar3)(plVar7,param_1 + 0x20,param_1 + 0x28,param_1 + 0x30,puVar3[1]);
      uVar4 = *(uint *)(lVar2 + 0x18);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)uVar4);
  } while( true );
}

