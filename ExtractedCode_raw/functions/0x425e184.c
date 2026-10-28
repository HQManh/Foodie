// rea decompile_all
// name: CakeOrder.CakeOrderDataTracking$$CreateLevelContext
// address: 0x425e184
// body: available
// range: 0x425e184-0x425e443 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x425e43c to 0x57e28a4 FUN_057e28a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x425e440 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_CakeOrderDataTracking__CreateLevelContext(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((DAT_09516f6b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182280);
    FUN_03f5c2a4(&DAT_091aee10);
    FUN_03f5c2a4(&DAT_091aee18);
    FUN_03f5c2a4(&DAT_091aee20);
    FUN_03f5c2a4(&DAT_091aee00);
    FUN_03f5c2a4(&DAT_0917c878);
    FUN_03f5c2a4(&DAT_09188e48);
    FUN_03f5c2a4(&DAT_09221a78);
    FUN_03f5c2a4(&DAT_09225880);
    FUN_03f5c2a4(&DAT_0921e6b0);
    FUN_03f5c2a4(&DAT_0921e6f8);
    DAT_09516f6b = 1;
  }
  if (*(int *)(DAT_09182280 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = *(long *)(*(long *)(DAT_09182280 + 0xb8) + 8);
  if (lVar4 != 0) {
    uVar7 = *(undefined8 *)(lVar4 + 0x30);
    lVar4 = thunk_FUN_03f9944c(DAT_0917c878);
    FUN_057e053c(lVar4,uVar7,DAT_091aee00);
    lVar5 = *(long *)(*(long *)(DAT_09182280 + 0xb8) + 8);
    if (lVar5 != 0) {
      uVar8 = *(undefined8 *)(lVar5 + 0x18);
      uVar7 = thunk_FUN_03f9944c(DAT_09188e48);
      Firebase_Analytics_Parameter___ctor(uVar7,DAT_0921e6b0,uVar8,0);
      if (lVar4 != 0) {
        FUN_057e1b20(lVar4,0,uVar7,DAT_091aee18);
        lVar5 = *(long *)(*(long *)(DAT_09182280 + 0xb8) + 8);
        if (lVar5 != 0) {
          uVar7 = System_Int32__ToString(lVar5 + 0x28,0);
          uVar8 = thunk_FUN_03f9944c(DAT_09188e48);
          Firebase_Analytics_Parameter___ctor(uVar8,DAT_0921e6f8,uVar7,0);
          FUN_057e1b20(lVar4,1,uVar8,DAT_091aee18);
          if (param_1 != 0) {
            uVar2 = *(int *)(param_1 + 0x38) - 1;
            uVar7 = thunk_FUN_03f9944c(DAT_09188e48);
            Firebase_Analytics_Parameter___ctor
                      (uVar7,DAT_09221a78,uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU),0);
            FUN_057e1b20(lVar4,2,uVar7,DAT_091aee18);
            iVar1 = *(int *)(param_1 + 0x40);
            uVar7 = thunk_FUN_03f9944c(DAT_09188e48);
            Firebase_Analytics_Parameter___ctor(uVar7,DAT_09225880,(long)iVar1,0);
            lVar5 = DAT_091aee10;
            lVar6 = *(long *)(lVar4 + 0x10);
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar6 != 0) {
              uVar2 = *(uint *)(lVar4 + 0x18);
              if (uVar2 < *(uint *)(lVar6 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                puVar3 = (undefined8 *)(lVar6 + (long)(int)uVar2 * 8 + 0x20);
                *puVar3 = uVar7;
                thunk_FUN_03f5d7b8(puVar3,uVar7);
              }
              else {
                FUN_057e0c68(lVar4,uVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              FUN_057e28a4(lVar4,DAT_091aee20);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

