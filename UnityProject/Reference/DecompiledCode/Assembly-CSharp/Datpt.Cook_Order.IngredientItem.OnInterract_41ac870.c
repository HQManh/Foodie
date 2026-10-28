// rea decompile_all
// name: Datpt.Cook_Order.IngredientItem$$OnInterract
// address: 0x41ac870
// body: available
// range: 0x41ac870-0x41aca4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41aca48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_IngredientItem__OnInterract
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  float extraout_s0;
  undefined4 uVar6;
  
  if ((DAT_095168c0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091eb990);
    FUN_03f5c2a4(&DAT_09191790);
    DAT_095168c0 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09191790);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = param_5;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x10),param_5);
    *(long *)(lVar1 + 0x18) = param_4;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x18),param_4);
    *(undefined1 *)(param_4 + 0xb0) = 1;
    lVar2 = Datpt_Cook_Order_LevelControlCookOrder__get_Ins();
    lVar3 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar3 != 0) {
      uVar4 = UnityEngine_Transform__get_position(lVar3,0);
      if (DAT_09515faa == '\0') {
        uVar4 = FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515faa = '\x01';
      }
      if (lVar2 != 0) {
        lVar2 = *(long *)(DAT_0918cbd0 + 0xb8);
        lVar2 = Datpt_Cook_Order_LevelControlCookOrder__SpawnProgressBar
                          (extraout_s0 + *(float *)(lVar2 + 0x18) * 0.5,
                           param_2 + *(float *)(lVar2 + 0x1c) * 0.5,
                           param_3 + *(float *)(lVar2 + 0x20) * 0.5,uVar4,0);
        plVar5 = (long *)(param_4 + 0xa8);
        *plVar5 = lVar2;
        thunk_FUN_03f5d7b8(plVar5,lVar2);
        lVar2 = *plVar5;
        uVar6 = *(undefined4 *)(param_4 + 0x90);
        uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar4,lVar1,DAT_091eb990,0);
        if (lVar2 != 0) {
          Datpt_Cook_Order_ProgressBar__StartIncrease(uVar6,lVar2,uVar4,0);
          lVar1 = *(long *)(param_4 + 0xb8);
          if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x041aca28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28))
            ;
            return;
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

