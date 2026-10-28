// rea decompile_all
// name: _GAME.Utils.HelperTime$$FormatTimePrettyFull
// address: 0x77465f8
// body: available
// range: 0x77465f8-0x77469c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77469b4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77469c0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77469c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Utils_HelperTime__FormatTimePrettyFull(ulong param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  
  if ((DAT_09522b22 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_092267e0);
    FUN_03f5c2a4(&DAT_09226850);
    FUN_03f5c2a4(&DAT_09226810);
    FUN_03f5c2a4(&DAT_09226838);
    DAT_09522b22 = 1;
  }
  if ((long)param_1 < 0x3c) {
    local_38 = param_1;
    uVar8 = FUN_03f5c42c(DAT_09535440,&local_38);
    System_String__Format(DAT_09226850,uVar8,0);
  }
  else {
    uVar9 = (uint)param_1;
    if (param_1 < 0xe10) {
      uVar1 = (uVar9 & 0xffff) / 0x3c;
      local_38 = (ulong)uVar1;
      uVar8 = FUN_03f5c42c(DAT_09535440,&local_38);
      local_40 = (ulong)(uVar9 + uVar1 * -0x3c) & 0xffff;
      uVar6 = FUN_03f5c42c(DAT_09535440,&local_40);
      System_String__Format(DAT_09226838,uVar8,uVar6,0);
    }
    else {
      if (0x2a2 < param_1 >> 7) {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = param_1;
        plVar3 = (long *)FUN_03f5c394(DAT_09180318,4);
        local_38 = param_1 / 0x15180;
        lVar4 = FUN_03f5c42c(DAT_09535440,&local_38);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if ((lVar4 != 0) &&
           (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
LAB_077469b8:
          uVar8 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar8,0);
        }
        if ((int)plVar3[3] != 0) {
          plVar3[4] = lVar4;
          thunk_FUN_03f5d7b8(plVar3 + 4,lVar4);
          local_40 = (ulong)(uVar9 + SUB164(auVar2 * ZEXT816(0xc22e450672894ab7),10) * -0x15180) /
                     0xe10;
          lVar4 = FUN_03f5c42c(DAT_09535440,&local_40);
          if ((lVar4 != 0) &&
             (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
          goto LAB_077469b8;
          if ((*(uint *)(plVar3 + 3) & 0xfffffffe) != 0) {
            plVar3[5] = lVar4;
            thunk_FUN_03f5d7b8(plVar3 + 5,lVar4);
            local_48 = (ulong)((uVar9 + (int)(param_1 / 0xe10) * -0xe10) * 0x889 >> 0x11);
            lVar4 = FUN_03f5c42c(DAT_09535440,&local_48);
            if ((lVar4 != 0) &&
               (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
            goto LAB_077469b8;
            if (2 < *(uint *)(plVar3 + 3)) {
              plVar3[6] = lVar4;
              thunk_FUN_03f5d7b8(plVar3 + 6,lVar4);
              local_50 = param_1 % 0x3c;
              lVar4 = FUN_03f5c42c(DAT_09535440,&local_50);
              if ((lVar4 != 0) &&
                 (lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0))
              goto LAB_077469b8;
              if ((*(uint *)(plVar3 + 3) & 0xfffffffc) != 0) {
                plVar3[7] = lVar4;
                thunk_FUN_03f5d7b8(plVar3 + 7,lVar4);
                System_String__Format(DAT_092267e0,plVar3,0);
                return;
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      param_1 = param_1 & 0xffffffff;
      local_38 = param_1 / 0xe10;
      uVar8 = FUN_03f5c42c(DAT_09535440,&local_38);
      local_40 = (ulong)((uVar9 + (int)(param_1 / 0xe10) * -0xe10 & 0xffff) / 0x3c);
      uVar6 = FUN_03f5c42c(DAT_09535440,&local_40);
      local_48 = (ulong)(uVar9 + (int)(param_1 / 0x3c) * -0x3c);
      uVar7 = FUN_03f5c42c(DAT_09535440,&local_48);
      System_String__Format(DAT_09226810,uVar8,uVar6,uVar7,0);
    }
  }
  return;
}

