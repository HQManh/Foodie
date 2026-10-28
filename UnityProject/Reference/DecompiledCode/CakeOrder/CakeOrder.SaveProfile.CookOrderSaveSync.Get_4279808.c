// rea decompile_all
// name: CakeOrder.SaveProfile.CookOrderSaveSync$$Get
// address: 0x4279808
// body: available
// range: 0x4279808-0x4279a93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4279a8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4279a90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_SaveProfile_CookOrderSaveSync__Get(void)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_09517089 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182c50);
    FUN_03f5c2a4(&DAT_0919f978);
    FUN_03f5c2a4(&DAT_0919f9f0);
    FUN_03f5c2a4(&DAT_09176b28);
    FUN_03f5c2a4(&DAT_091a4580);
    FUN_03f5c2a4(&DAT_091a4588);
    FUN_03f5c2a4(&DAT_091a4590);
    FUN_03f5c2a4(&DAT_091a86d0);
    FUN_03f5c2a4(&DAT_091b9ce8);
    FUN_03f5c2a4(&DAT_091b9db8);
    FUN_03f5c2a4(&DAT_091b9d48);
    FUN_03f5c2a4(&DAT_0918ee48);
    DAT_09517089 = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (*(int *)(DAT_09182c50 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = CakeOrder_SaveProfile_CookOrderSaveSync__get_IsReady();
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0918ee48);
  System_Object___ctor(lVar3,0);
  if (*(int *)(DAT_09182c50 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = CakeOrder_SaveProfile_CookOrderSaveSync__get_ProfileManager();
  if ((lVar4 != 0) && (uVar5 = FUN_06077228(lVar4,DAT_091b9db8), lVar3 != 0)) {
    *(undefined8 *)(lVar3 + 0x10) = uVar5;
    thunk_FUN_03f5d7b8();
    lVar4 = CakeOrder_SaveProfile_CookOrderSaveSync__get_ProgressManager();
    if (lVar4 != 0) {
      uVar5 = FUN_06077228(lVar4,DAT_091b9d48);
      *(undefined8 *)(lVar3 + 0x18) = uVar5;
      thunk_FUN_03f5d7b8();
      lVar4 = CakeOrder_SaveProfile_CookOrderSaveSync__get_LiveOpsManagerData();
      if (lVar4 != 0) {
        uVar5 = FUN_06077228(lVar4,DAT_091b9ce8);
        *(undefined8 *)(lVar3 + 0x20) = uVar5;
        thunk_FUN_03f5d7b8();
        lVar4 = thunk_FUN_03f9944c(DAT_09176b28);
        FUN_06fc96ac(lVar4,DAT_0919f978);
        plVar6 = (long *)(lVar3 + 0x28);
        *plVar6 = lVar4;
        thunk_FUN_03f5d7b8(plVar6,lVar4);
        lVar4 = CakeOrder_SaveProfile_CookOrderSaveSync__GetPrefKeys(*(undefined8 *)(lVar3 + 0x18));
        if (lVar4 != 0) {
          FUN_053ec0b0(&local_58,lVar4,DAT_091a86d0);
          while( true ) {
            do {
              uVar2 = FUN_071bb7b4(&local_58,DAT_091a4588);
              uVar5 = local_48;
              if ((uVar2 & 1) == 0) {
                FUN_071bb7b0(&local_58,DAT_091a4580);
                return lVar3;
              }
              uVar2 = UnityEngine_PlayerPrefs__HasKey(local_48,0);
            } while ((uVar2 & 1) == 0);
            lVar4 = *plVar6;
            uVar1 = UnityEngine_PlayerPrefs__GetInt(uVar5,0,0);
            if (lVar4 == 0) break;
            FUN_06fca434(lVar4,uVar5,uVar1,DAT_0919f9f0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

