// rea decompile_all
// name: AnhPD.FoodOrder.StationHolder$$GetActiveStation
// address: 0x4117908
// body: available
// range: 0x4117908-0x4117ac7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4117ab8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4117abc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4117ac0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4117ac4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_StationHolder__GetActiveStation(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_68;
  undefined8 *puStack_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  if ((DAT_09516242 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a27c8);
    FUN_03f5c2a4(&DAT_091a27d0);
    FUN_03f5c2a4(&DAT_091a27d8);
    FUN_03f5c2a4(&DAT_091ac050);
    FUN_03f5c2a4(&DAT_091ac068);
    FUN_03f5c2a4(&DAT_091ac048);
    FUN_03f5c2a4(&DAT_0917bf68);
    DAT_09516242 = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0917bf68);
  FUN_057e0400(lVar3,DAT_091ac048);
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_68,*(long *)(param_1 + 0x28),DAT_091ac068);
  local_40 = local_58;
  uStack_48 = puStack_60;
  local_50 = local_68;
  local_68 = 0;
  puStack_60 = &local_50;
  while( true ) {
    do {
      uVar4 = FUN_071bd28c(&local_50,DAT_091a27d0);
      lVar2 = local_40;
      if ((uVar4 & 1) == 0) {
        FUN_071bd288(&local_50,DAT_091a27c8);
        return lVar3;
      }
      if (local_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = UnityEngine_Component__get_gameObject(local_40,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
      lVar5 = DAT_091ac050;
    } while ((uVar4 & 1) == 0);
    if (lVar3 == 0) break;
    lVar7 = *(long *)(lVar3 + 0x10);
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar7 == 0) break;
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
      *plVar6 = lVar2;
      thunk_FUN_03f5d7b8(plVar6,lVar2);
    }
    else {
      FUN_057e0c68(lVar3,lVar2,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

