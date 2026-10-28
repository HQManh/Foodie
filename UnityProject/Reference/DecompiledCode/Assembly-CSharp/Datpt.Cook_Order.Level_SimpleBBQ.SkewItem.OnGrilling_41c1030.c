// rea decompile_all
// name: Datpt.Cook_Order.Level_SimpleBBQ.SkewItem$$OnGrilling
// address: 0x41c1030
// body: available
// range: 0x41c1030-0x41c125b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41c1254 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41c1258 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_Level_SimpleBBQ_SkewItem__OnGrilling
               (undefined4 param_1,float param_2,float param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  float fVar6;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  if ((DAT_0951699b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091a3608);
    FUN_03f5c2a4(&DAT_091a3610);
    FUN_03f5c2a4(&DAT_091a3618);
    FUN_03f5c2a4(&DAT_091adf60);
    FUN_03f5c2a4(&DAT_091d9408);
    DAT_0951699b = 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  *(undefined1 *)(param_4 + 0x111) = 1;
  lVar1 = Datpt_Cook_Order_LevelControlCookOrder__get_Ins(0);
  lVar2 = Datpt_Cook_Order_ItemMovingBase__get_TF(param_4,0);
  if (lVar2 != 0) {
    fVar6 = (float)UnityEngine_Transform__get_position(lVar2,0);
    if (DAT_09515faa == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515faa = '\x01';
    }
    if (lVar1 != 0) {
      lVar2 = *(long *)(DAT_0918cbd0 + 0xb8);
      lVar1 = Datpt_Cook_Order_LevelControlCookOrder__SpawnTimer
                        (fVar6 + *(float *)(lVar2 + 0x18) * 0.5,
                         param_2 + *(float *)(lVar2 + 0x1c) * 0.5,
                         param_3 + *(float *)(lVar2 + 0x20) * 0.5,lVar1,0);
      plVar5 = (long *)(param_4 + 0xf8);
      *plVar5 = lVar1;
      thunk_FUN_03f5d7b8(plVar5,lVar1);
      if (*plVar5 != 0) {
        Datpt_Cook_Order_KitchenTimer__Show(0x3e800000,param_1,0x40a00000,*plVar5,0,0);
        lVar1 = *(long *)(param_4 + 0xf8);
        uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar3,param_4,DAT_091d9408,0);
        if (lVar1 != 0) {
          Datpt_Cook_Order_KitchenTimer__add_OnCookedEvent(lVar1,uVar3,0);
          Datpt_Cook_Order_Level_SimpleBBQ_SkewItem__ShakingSkewer(param_4,4);
          if (*(long *)(param_4 + 0x118) != 0) {
            FUN_057e185c(&local_68,*(long *)(param_4 + 0x118),DAT_091adf60);
            while( true ) {
              uVar4 = FUN_071bd28c(&local_68,DAT_091a3610);
              if ((uVar4 & 1) == 0) {
                FUN_071bd288(&local_68,DAT_091a3608);
                return;
              }
              if (local_58 == 0) break;
              Datpt_Cook_Order_Level_SimpleBBQ_ItemOnSkewer__OnGrilling(param_1);
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

