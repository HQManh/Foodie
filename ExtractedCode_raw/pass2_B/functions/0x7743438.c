// rea decompile_all
// name: _GAME.Utils.HelperNumber$$FormatKMBT
// address: 0x7743438
// body: available
// range: 0x7743438-0x77438f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Utils_HelperNumber__FormatKMBT(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long local_38;
  long local_28;
  
  if ((DAT_09522b04 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09226038);
    FUN_03f5c2a4(&DAT_09226778);
    FUN_03f5c2a4(&DAT_09226780);
    FUN_03f5c2a4(&DAT_09226538);
    FUN_03f5c2a4(&DAT_09226790);
    FUN_03f5c2a4(&DAT_09226540);
    FUN_03f5c2a4(&DAT_09226550);
    FUN_03f5c2a4(&DAT_09226548);
    DAT_09522b04 = 1;
  }
  lVar2 = _GAME_Utils_HelperNumber__MathPowLong(10,4);
  if (param_1 < lVar2) {
    local_28 = param_1;
    uVar3 = FUN_03f5c42c(DAT_09535440,&local_28);
    uVar6 = DAT_09226038;
LAB_077435cc:
    System_String__Format(uVar6,uVar3,0);
  }
  else {
    lVar2 = _GAME_Utils_HelperNumber__MathPowLong(10,5);
    if (param_1 < lVar2) {
      lVar2 = _GAME_Utils_HelperNumber__MathPowLong(10,3);
      local_28 = 0;
      if (lVar2 != 0) {
        local_28 = param_1 / lVar2;
      }
      lVar4 = _GAME_Utils_HelperNumber__MathPowLong(10,3);
      lVar5 = _GAME_Utils_HelperNumber__MathPowLong(10,2);
      lVar2 = 0;
      if (lVar4 != 0) {
        lVar2 = param_1 / lVar4;
      }
      lVar7 = 0;
      if (lVar5 != 0) {
        lVar7 = (param_1 - lVar2 * lVar4) / lVar5;
      }
      uVar3 = FUN_03f5c42c(DAT_09535440,&local_28);
      local_38 = lVar7;
      uVar6 = FUN_03f5c42c(DAT_09535440,&local_38);
      puVar8 = &DAT_09226540;
    }
    else {
      lVar2 = _GAME_Utils_HelperNumber__MathPowLong(10,6);
      if (param_1 < lVar2) {
        lVar2 = _GAME_Utils_HelperNumber__MathPowLong(10,3);
        local_28 = 0;
        if (lVar2 != 0) {
          local_28 = param_1 / lVar2;
        }
        uVar3 = FUN_03f5c42c(DAT_09535440,&local_28);
        puVar8 = &DAT_09226778;
LAB_077435c8:
        uVar6 = *puVar8;
        goto LAB_077435cc;
      }
      lVar2 = _GAME_Utils_HelperNumber__MathPowLong(10,7);
      if (param_1 < lVar2) {
        lVar4 = _GAME_Utils_HelperNumber__MathPowLong(10,6);
        lVar2 = 0;
        if (lVar4 != 0) {
          lVar2 = param_1 / lVar4;
        }
        lVar4 = _GAME_Utils_HelperNumber__MathPowLong(10,6);
        uVar3 = 4;
      }
      else {
        lVar2 = _GAME_Utils_HelperNumber__MathPowLong(10,8);
        if (lVar2 <= param_1) {
          lVar2 = _GAME_Utils_HelperNumber__MathPowLong(10,9);
          if (lVar2 <= param_1) {
            lVar2 = _GAME_Utils_HelperNumber__MathPowLong(10,10);
            if (param_1 < lVar2) {
              lVar4 = _GAME_Utils_HelperNumber__MathPowLong(10,9);
              lVar2 = 0;
              if (lVar4 != 0) {
                lVar2 = param_1 / lVar4;
              }
              lVar4 = _GAME_Utils_HelperNumber__MathPowLong(10,9);
              uVar3 = 7;
            }
            else {
              lVar2 = _GAME_Utils_HelperNumber__MathPowLong(10,0xb);
              if (lVar2 <= param_1) {
                lVar2 = _GAME_Utils_HelperNumber__MathPowLong(10,0xc);
                if (lVar2 <= param_1) {
                  lVar2 = _GAME_Utils_HelperNumber__MathPowLong(10,0xd);
                  if (param_1 < lVar2) {
                    lVar4 = _GAME_Utils_HelperNumber__MathPowLong(10,0xc);
                    lVar2 = 0;
                    if (lVar4 != 0) {
                      lVar2 = param_1 / lVar4;
                    }
                    lVar4 = _GAME_Utils_HelperNumber__MathPowLong(10,0xc);
                    uVar3 = 10;
                  }
                  else {
                    lVar2 = _GAME_Utils_HelperNumber__MathPowLong(10,0xe);
                    lVar4 = _GAME_Utils_HelperNumber__MathPowLong(10,0xc);
                    if (lVar2 <= param_1) {
                      local_28 = 0;
                      if (lVar4 != 0) {
                        local_28 = param_1 / lVar4;
                      }
                      uVar3 = FUN_03f5c42c(DAT_09535440,&local_28);
                      puVar8 = &DAT_09226790;
                      goto LAB_077435c8;
                    }
                    lVar2 = 0;
                    if (lVar4 != 0) {
                      lVar2 = param_1 / lVar4;
                    }
                    lVar4 = _GAME_Utils_HelperNumber__MathPowLong(10,0xc);
                    uVar3 = 0xb;
                  }
                  lVar7 = _GAME_Utils_HelperNumber__MathPowLong(10,uVar3);
                  lVar5 = 0;
                  if (lVar4 != 0) {
                    lVar5 = param_1 / lVar4;
                  }
                  lVar1 = 0;
                  if (lVar7 != 0) {
                    lVar1 = (param_1 - lVar5 * lVar4) / lVar7;
                  }
                  local_28 = lVar2;
                  uVar3 = FUN_03f5c42c(DAT_09535440,&local_28);
                  local_38 = lVar1;
                  uVar6 = FUN_03f5c42c(DAT_09535440,&local_38);
                  puVar8 = &DAT_09226550;
                  goto LAB_077436a4;
                }
                uVar3 = 9;
                goto LAB_077436ec;
              }
              lVar4 = _GAME_Utils_HelperNumber__MathPowLong(10,9);
              lVar2 = 0;
              if (lVar4 != 0) {
                lVar2 = param_1 / lVar4;
              }
              lVar4 = _GAME_Utils_HelperNumber__MathPowLong(10,9);
              uVar3 = 8;
            }
            lVar7 = _GAME_Utils_HelperNumber__MathPowLong(10,uVar3);
            lVar5 = 0;
            if (lVar4 != 0) {
              lVar5 = param_1 / lVar4;
            }
            lVar1 = 0;
            if (lVar7 != 0) {
              lVar1 = (param_1 - lVar5 * lVar4) / lVar7;
            }
            local_28 = lVar2;
            uVar3 = FUN_03f5c42c(DAT_09535440,&local_28);
            local_38 = lVar1;
            uVar6 = FUN_03f5c42c(DAT_09535440,&local_38);
            puVar8 = &DAT_09226538;
            goto LAB_077436a4;
          }
          uVar3 = 6;
LAB_077436ec:
          lVar2 = _GAME_Utils_HelperNumber__MathPowLong(10,uVar3);
          local_28 = 0;
          if (lVar2 != 0) {
            local_28 = param_1 / lVar2;
          }
          uVar3 = FUN_03f5c42c(DAT_09535440,&local_28);
          puVar8 = &DAT_09226780;
          goto LAB_077435c8;
        }
        lVar4 = _GAME_Utils_HelperNumber__MathPowLong(10,6);
        lVar2 = 0;
        if (lVar4 != 0) {
          lVar2 = param_1 / lVar4;
        }
        lVar4 = _GAME_Utils_HelperNumber__MathPowLong(10,6);
        uVar3 = 5;
      }
      lVar7 = _GAME_Utils_HelperNumber__MathPowLong(10,uVar3);
      lVar5 = 0;
      if (lVar4 != 0) {
        lVar5 = param_1 / lVar4;
      }
      lVar1 = 0;
      if (lVar7 != 0) {
        lVar1 = (param_1 - lVar5 * lVar4) / lVar7;
      }
      local_28 = lVar2;
      uVar3 = FUN_03f5c42c(DAT_09535440,&local_28);
      local_38 = lVar1;
      uVar6 = FUN_03f5c42c(DAT_09535440,&local_38);
      puVar8 = &DAT_09226548;
    }
LAB_077436a4:
    System_String__Format(*puVar8,uVar3,uVar6,0);
  }
  return;
}

