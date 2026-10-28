// rea decompile_all
// name: AnhPD.FoodOrder.Autoplay.CookingBotBridge$$AddSaveMeBag
// address: 0x41709a4
// body: available
// range: 0x41709a4-0x4170ca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4170ca0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_Autoplay_CookingBotBridge__AddSaveMeBag(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  int local_68;
  undefined4 local_64;
  
  if ((DAT_095165df & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181f00);
    FUN_03f5c2a4(&DAT_09181f08);
    FUN_03f5c2a4(&DAT_091ab580);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09226720);
    DAT_095165df = 1;
  }
  local_64 = 0;
  if (DAT_09515fad == '\0') {
    FUN_03f5c2a4(&DAT_0918aec0);
    DAT_09515fad = '\x01';
  }
  lVar12 = **(long **)(DAT_0918aec0 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Equality(lVar12,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (lVar12 != 0) {
    uVar5 = AnhPD_FoodOrder_SpawnBagSaveMe__get_IsEmpty(lVar12,0);
    if ((uVar5 & 1) != 0) {
      return;
    }
    lVar6 = thunk_FUN_03f9944c(DAT_09181f08);
    CookingGraph_BotSaveMeBagState___ctor(lVar6,0);
    local_64 = UnityEngine_Object__GetInstanceID(lVar12,0);
    uVar7 = System_Int32__ToString(&local_64,0);
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x10) = uVar7;
      thunk_FUN_03f5d7b8();
      iVar3 = AnhPD_FoodOrder_SpawnBagSaveMe__get_EntryCount(lVar12,0);
      if (0 < iVar3) {
        iVar3 = 0;
        do {
          uVar7 = AnhPD_FoodOrder_SpawnBagSaveMe__EntryIdAt(lVar12,iVar3,0);
          uVar5 = System_String__IsNullOrEmpty(uVar7,0);
          if ((uVar5 & 1) == 0) {
            if (*(long *)(param_1 + 0x20) == 0) goto LAB_04170ca0;
            uVar8 = AnhPD_FoodOrder_Autoplay_GraphNodeIdMap__NodeOf
                              (*(long *)(param_1 + 0x20),uVar7,0);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188ad0);
            }
            uVar5 = UnityEngine_Object__op_Equality(uVar8,0,0);
            if ((uVar5 & 1) == 0) {
              lVar13 = *(long *)(lVar6 + 0x18);
              lVar9 = thunk_FUN_03f9944c(DAT_09181f00);
              CookingGraph_BotSaveMeBagItemState___ctor(lVar9,0);
              uVar14 = *(undefined8 *)(lVar6 + 0x10);
              local_68 = iVar3;
              uVar7 = FUN_03f5c42c(DAT_09535420,&local_68);
              uVar7 = System_String__Format(DAT_09226720,uVar14,uVar7,0);
              if (lVar9 == 0) goto LAB_04170ca0;
              *(undefined8 *)(lVar9 + 0x10) = uVar7;
              thunk_FUN_03f5d7b8();
              *(undefined8 *)(lVar9 + 0x18) = uVar8;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar9 + 0x18),uVar8);
              lVar2 = DAT_091ab580;
              if (lVar13 == 0) goto LAB_04170ca0;
              lVar11 = *(long *)(lVar13 + 0x10);
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              if (lVar11 == 0) goto LAB_04170ca0;
              uVar1 = *(uint *)(lVar13 + 0x18);
              if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                plVar10 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                *plVar10 = lVar9;
                thunk_FUN_03f5d7b8(plVar10,lVar9);
              }
              else {
                FUN_057e0c68(lVar13,lVar9,
                             *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
            }
            else {
              if (*(long *)(param_1 + 0x20) == 0) goto LAB_04170ca0;
              AnhPD_FoodOrder_Autoplay_GraphNodeIdMap__ReportUnmapped
                        (*(long *)(param_1 + 0x20),uVar7,0);
            }
          }
          iVar3 = iVar3 + 1;
          iVar4 = AnhPD_FoodOrder_SpawnBagSaveMe__get_EntryCount(lVar12,0);
        } while (iVar3 < iVar4);
      }
      if (param_2 != 0) {
        *(long *)(param_2 + 0x40) = lVar6;
        thunk_FUN_03f5d7b8((long *)(param_2 + 0x40),lVar6);
        return;
      }
    }
  }
LAB_04170ca0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

