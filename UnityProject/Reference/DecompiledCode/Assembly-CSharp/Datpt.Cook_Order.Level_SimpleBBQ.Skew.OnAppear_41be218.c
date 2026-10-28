// rea decompile_all
// name: Datpt.Cook_Order.Level_SimpleBBQ.Skew$$OnAppear
// address: 0x41be218
// body: available
// range: 0x41be218-0x41be4af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41be49c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41be4a0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41be4ac to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_Level_SimpleBBQ_Skew__OnAppear(long *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  
  if ((DAT_0951697e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835f0);
    FUN_03f5c2a4(&DAT_091ac7d8);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd10);
    FUN_03f5c2a4(&DAT_091f00e8);
    FUN_03f5c2a4(&DAT_091948c0);
    FUN_03f5c2a4(&DAT_091fb4d0);
    DAT_0951697e = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_091948c0);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x10) = param_2;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x10),param_2);
    (**(code **)(*param_1 + 0x428))(param_1,0,*(undefined8 *)(*param_1 + 0x430));
    lVar8 = param_1[0x1a];
    if (DAT_09515ce6 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515ce6 = '\x01';
    }
    if (lVar8 != 0) {
      puVar6 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
      UnityEngine_Transform__set_localScale(*puVar6,puVar6[1],puVar6[2],lVar8,0);
      uVar3 = DG_Tweening_ShortcutExtensions__DOScale(0x3f800000,0x3e4ccccd,param_1[0x1a],0);
      uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
      DG_Tweening_TweenCallback___ctor(uVar4,lVar2,DAT_091f00e8,0);
      FUN_04d956bc(uVar3,uVar4,DAT_091dbd10);
      plVar5 = (long *)FUN_03f5c394(DAT_09180318,1);
      if (plVar5 != (long *)0x0) {
        if ((DAT_091fb4d0 != 0) &&
           (lVar2 = thunk_FUN_03f99350(DAT_091fb4d0,*(undefined8 *)(*plVar5 + 0x40)), lVar2 == 0)) {
          uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar3,0);
        }
        if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar5[4] = DAT_091fb4d0;
        thunk_FUN_03f5d7b8();
        if (*(int *)(DAT_091835f0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        Datpt_DebugCustom__LogColor(plVar5,0);
        lVar2 = DAT_091ac7d8;
        lVar8 = param_1[0x24];
        if (lVar8 != 0) {
          lVar7 = *(long *)(lVar8 + 0x10);
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 10;
            }
            else {
              FUN_05799adc(lVar8,10,*(undefined8 *)
                                     (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
                    /* WARNING: Could not recover jumptable at 0x041be498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0x3b8))(param_1,*(undefined8 *)(*param_1 + 0x3c0));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

