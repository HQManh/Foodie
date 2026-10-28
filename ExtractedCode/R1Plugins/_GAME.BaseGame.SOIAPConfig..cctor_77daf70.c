// rea decompile_all
// name: _GAME.BaseGame.SOIAPConfig$$.cctor
// address: 0x77daf70
// body: available
// range: 0x77daf70-0x77db46b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77db464 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77db468 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_BaseGame_SOIAPConfig___cctor(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((DAT_0952300f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919cd90);
    FUN_03f5c2a4(&DAT_0919cda0);
    FUN_03f5c2a4(&DAT_09176210);
    FUN_03f5c2a4(&DAT_09185298);
    FUN_03f5c2a4(&DAT_0918a4d0);
    FUN_03f5c2a4(&DAT_0917fad0);
    FUN_03f5c2a4(&DAT_091bed00);
    DAT_0952300f = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09176210);
  FUN_06f33130(lVar1,DAT_0919cd90);
  lVar2 = thunk_FUN_03f9944c(DAT_09185298);
  _GAME_BaseGame_IAPPackConfig___ctor();
  if ((lVar2 != 0) && (*(undefined8 *)(lVar2 + 0x10) = 0x411fd70a00000064, lVar1 != 0)) {
    FUN_06f33ed8(lVar1,100,lVar2,DAT_0919cda0);
    lVar2 = FUN_03f5c394(DAT_0917fad0,3);
    local_38 = 0;
    FUN_066c6984(&local_38,5,1000,DAT_091bed00);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x18) != 0) {
        *(undefined8 *)(lVar2 + 0x20) = local_38;
        local_40 = 0;
        FUN_066c6984(&local_40,0x14,1,DAT_091bed00);
        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar2 + 0x28) = local_40;
          local_48 = 0;
          FUN_066c6984(&local_48,0x17,1,DAT_091bed00);
          if (2 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x30) = local_48;
            uVar3 = _GAME_BaseGame_SOIAPConfig__Pack(0x403f5c29,0x32,lVar2);
            FUN_06f33ed8(lVar1,0x32,uVar3,DAT_0919cda0);
            lVar2 = FUN_03f5c394(DAT_0917fad0,4);
            local_50 = 0;
            FUN_066c6984(&local_50,5,3000,DAT_091bed00);
            if (lVar2 == 0) goto LAB_077db468;
            if (*(int *)(lVar2 + 0x18) != 0) {
              *(undefined8 *)(lVar2 + 0x20) = local_50;
              local_58 = 0;
              FUN_066c6984(&local_58,0x14,2,DAT_091bed00);
              if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
                *(undefined8 *)(lVar2 + 0x28) = local_58;
                local_60 = 0;
                FUN_066c6984(&local_60,0x16,2,DAT_091bed00);
                if (2 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x30) = local_60;
                  local_68 = 0;
                  FUN_066c6984(&local_68,0x17,2,DAT_091bed00);
                  if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
                    *(undefined8 *)(lVar2 + 0x38) = local_68;
                    uVar3 = _GAME_BaseGame_SOIAPConfig__Pack(0x40bfae14,0x33,lVar2);
                    FUN_06f33ed8(lVar1,0x33,uVar3,DAT_0919cda0);
                    lVar2 = FUN_03f5c394(DAT_0917fad0,4);
                    local_70 = 0;
                    FUN_066c6984(&local_70,5,6000,DAT_091bed00);
                    if (lVar2 == 0) goto LAB_077db468;
                    if (*(int *)(lVar2 + 0x18) != 0) {
                      *(undefined8 *)(lVar2 + 0x20) = local_70;
                      local_78 = 0;
                      FUN_066c6984(&local_78,0x14,4,DAT_091bed00);
                      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
                        *(undefined8 *)(lVar2 + 0x28) = local_78;
                        local_80 = 0;
                        FUN_066c6984(&local_80,0x16,4,DAT_091bed00);
                        if (2 < *(uint *)(lVar2 + 0x18)) {
                          *(undefined8 *)(lVar2 + 0x30) = local_80;
                          local_88 = 0;
                          FUN_066c6984(&local_88,0x17,4,DAT_091bed00);
                          if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
                            *(undefined8 *)(lVar2 + 0x38) = local_88;
                            uVar3 = _GAME_BaseGame_SOIAPConfig__Pack(0x413fd70a,0x34,lVar2);
                            FUN_06f33ed8(lVar1,0x34,uVar3,DAT_0919cda0);
                            lVar2 = FUN_03f5c394(DAT_0917fad0,4);
                            local_90 = 0;
                            FUN_066c6984(&local_90,5,10000,DAT_091bed00);
                            if (lVar2 == 0) goto LAB_077db468;
                            if (*(int *)(lVar2 + 0x18) != 0) {
                              *(undefined8 *)(lVar2 + 0x20) = local_90;
                              local_98 = 0;
                              FUN_066c6984(&local_98,0x14,7,DAT_091bed00);
                              if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
                                *(undefined8 *)(lVar2 + 0x28) = local_98;
                                local_a0 = 0;
                                FUN_066c6984(&local_a0,0x16,7,DAT_091bed00);
                                if (2 < *(uint *)(lVar2 + 0x18)) {
                                  *(undefined8 *)(lVar2 + 0x30) = local_a0;
                                  local_a8 = 0;
                                  FUN_066c6984(&local_a8,0x17,7,DAT_091bed00);
                                  if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
                                    *(undefined8 *)(lVar2 + 0x38) = local_a8;
                                    uVar3 = _GAME_BaseGame_SOIAPConfig__Pack(0x416fd70a,0x35,lVar2);
                                    lVar2 = FUN_03f5c394(DAT_0917fad0,1);
                                    local_b0 = 0;
                                    FUN_066c6984(&local_b0,0x33,0x11,DAT_091bed00);
                                    if (lVar2 == 0) goto LAB_077db468;
                                    if (*(int *)(lVar2 + 0x18) != 0) {
                                      *(undefined8 *)(lVar2 + 0x20) = local_b0;
                                      _GAME_BaseGame_SOIAPConfig__WithR1Items(uVar3,lVar2);
                                      FUN_06f33ed8(lVar1,0x35,uVar3,DAT_0919cda0);
                                      **(long **)(DAT_0918a4d0 + 0xb8) = lVar1;
                                      thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_0918a4d0 + 0xb8),lVar1)
                                      ;
                                      return;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_077db468:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

