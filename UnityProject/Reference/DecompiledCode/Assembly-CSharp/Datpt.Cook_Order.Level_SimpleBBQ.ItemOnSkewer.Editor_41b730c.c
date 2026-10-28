// rea decompile_all
// name: Datpt.Cook_Order.Level_SimpleBBQ.ItemOnSkewer$$Editor
// address: 0x41b730c
// body: available
// range: 0x41b730c-0x41b74d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41b74cc to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41b74d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_Level_SimpleBBQ_ItemOnSkewer__Editor(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  if ((DAT_0951694b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c54d0);
    FUN_03f5c2a4(&DAT_091c5860);
    FUN_03f5c2a4(&DAT_091cb2c8);
    FUN_03f5c2a4(&DAT_091b0430);
    FUN_03f5c2a4(&DAT_0918c980);
    FUN_03f5c2a4(&DAT_0920d848);
    DAT_0951694b = 1;
  }
  lVar1 = UnityEngine_Component__get_transform(param_1,0);
  if (lVar1 != 0) {
    uVar2 = UnityEngine_Transform__Find(lVar1,DAT_0920d848,0);
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    thunk_FUN_03f5d7b8();
    uVar2 = FUN_04a6a14c(param_1,DAT_091c54d0);
    *(undefined8 *)(param_1 + 0x58) = uVar2;
    thunk_FUN_03f5d7b8();
    uVar2 = FUN_04a6ac70(param_1,1,DAT_091c5860);
    lVar1 = FUN_04b08b78(uVar2,DAT_091cb2c8);
    if (lVar1 != 0) {
      uVar2 = FUN_057e0998(lVar1,0,DAT_091b0430);
      *(undefined8 *)(param_1 + 0x40) = uVar2;
      thunk_FUN_03f5d7b8();
      lVar3 = FUN_057e0998(lVar1,1,DAT_091b0430);
      if (lVar3 != 0) {
        lVar3 = UnityEngine_Component__get_gameObject(lVar3,0);
        plVar5 = (long *)(param_1 + 0x50);
        *plVar5 = lVar3;
        thunk_FUN_03f5d7b8(plVar5,lVar3);
        uVar2 = FUN_057e0998(lVar1,2,DAT_091b0430);
        puVar4 = (undefined8 *)(param_1 + 0x48);
        *puVar4 = uVar2;
        thunk_FUN_03f5d7b8(puVar4,uVar2);
        uVar2 = *(undefined8 *)(param_1 + 0x40);
        if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        Datpt_Utilities__SetAlpha(0,uVar2,0);
        Datpt_Utilities__SetAlpha(0,*puVar4,0);
        if (*plVar5 != 0) {
          UnityEngine_GameObject__SetActive(*plVar5,0,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

