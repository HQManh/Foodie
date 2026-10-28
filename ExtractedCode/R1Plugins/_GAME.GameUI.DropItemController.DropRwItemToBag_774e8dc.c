// rea decompile_all
// name: _GAME.GameUI.DropItemController$$DropRwItemToBag
// address: 0x774e8dc
// body: available
// range: 0x774e8dc-0x774ec07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x774ec00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x774ec04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_GameUI_DropItemController__DropRwItemToBag(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  undefined8 local_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_09522b8c & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919ee00);
    FUN_03f5c2a4(&DAT_0919ee10);
    FUN_03f5c2a4(&DAT_091a6480);
    FUN_03f5c2a4(&DAT_091a6488);
    FUN_03f5c2a4(&DAT_091a6490);
    FUN_03f5c2a4(&DAT_091a96b0);
    FUN_03f5c2a4(&DAT_091a96b8);
    FUN_03f5c2a4(&DAT_091afa48);
    FUN_03f5c2a4(&DAT_091afa40);
    FUN_03f5c2a4(&DAT_091afa60);
    FUN_03f5c2a4(&DAT_091afa68);
    FUN_03f5c2a4(&DAT_0917cae0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918a440);
    FUN_03f5c2a4(&DAT_091ba678);
    DAT_09522b8c = 1;
  }
  lVar5 = *(long *)(DAT_091ba678 + 0x20);
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  lVar5 = **(long **)(lVar5 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar6 = UnityEngine_Object__op_Equality(lVar5,0,0);
  if ((param_1 != 0) && ((uVar6 & 1) == 0)) {
    uVar4 = FUN_06f2cfb8(param_1,DAT_0919ee10);
    lVar7 = thunk_FUN_03f9944c(DAT_0917cae0);
    FUN_057e0478(lVar7,uVar4,DAT_091afa40);
    FUN_06f2d6f4(&local_a0,param_1,DAT_0919ee00);
    uStack_78 = puStack_98;
    local_80 = local_a0;
    uStack_68 = uStack_88;
    local_70 = uStack_90;
    local_a0 = 0;
    puStack_98 = &local_80;
    while (uVar6 = FUN_0726063c(&local_80,DAT_091a6488), (uVar6 & 1) != 0) {
      uVar4 = (undefined4)local_70;
      uVar3 = local_70._4_4_;
      lVar8 = thunk_FUN_03f9944c(DAT_0918a440);
      System_Object___ctor(lVar8,0);
      *(undefined4 *)(lVar8 + 0x10) = uVar4;
      *(undefined4 *)(lVar8 + 0x14) = uVar3;
      lVar2 = DAT_091afa48;
      if (lVar7 == 0) {
LAB_0774ec00:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar11 = *(long *)(lVar7 + 0x10);
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      if (lVar11 == 0) goto LAB_0774ec00;
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        plVar9 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
        *plVar9 = lVar8;
        thunk_FUN_03f5d7b8(plVar9,lVar8);
      }
      else {
        FUN_057e0c68(lVar7,lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
    }
    FUN_07260744(&local_80,DAT_091a6480);
    UnityEngine_Time__get_realtimeSinceStartup(0);
    if (lVar7 == 0) {
LAB_0774ec04:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (0 < *(int *)(lVar7 + 0x18)) {
      iVar12 = 0;
      do {
        uVar10 = FUN_057e0998(lVar7,iVar12,DAT_091afa68);
        if (lVar5 == 0) goto LAB_0774ec04;
        _GAME_GameUI_DropItemController__GetRandomSourcePosition(lVar5);
        _GAME_GameUI_DropItemController__ScheduleItemToBag(lVar5,uVar10);
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(lVar7 + 0x18));
    }
  }
  return;
}

