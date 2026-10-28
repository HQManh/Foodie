// rea decompile_all
// name: Newtonsoft.Json.Linq.JToken.<ReadFromAsync>d__3$$MoveNext
// address: 0x76f1790
// body: available
// range: 0x76f1790-0x76f205f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76f1ac8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f1f7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f1f80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f1f84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f1f88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f1f8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f1f90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f1f94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f1f98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f1f9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f1fd0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76f1fd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JToken_<ReadFromAsync>d__3__MoveNext(int *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 local_94 [3];
  undefined4 local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_095228af & 1) == 0) {
    FUN_03f5c2a4(&DAT_09198d58);
    FUN_03f5c2a4(&DAT_09198d60);
    FUN_03f5c2a4(&DAT_09198d40);
    FUN_03f5c2a4(&DAT_09198d48);
    FUN_03f5c2a4(&DAT_09198d50);
    FUN_03f5c2a4(&DAT_09198d80);
    FUN_03f5c2a4(&DAT_09175278);
    FUN_03f5c2a4(&DAT_0919b908);
    FUN_03f5c2a4(&DAT_0919b930);
    FUN_03f5c2a4(&DAT_0919b940);
    FUN_03f5c2a4(&DAT_0919b938);
    FUN_03f5c2a4(&DAT_0919b948);
    FUN_03f5c2a4(&DAT_0919ba28);
    FUN_03f5c2a4(&DAT_0919ba48);
    FUN_03f5c2a4(&DAT_0919ba38);
    FUN_03f5c2a4(&DAT_0919b9d8);
    FUN_03f5c2a4(&DAT_0919ba58);
    FUN_03f5c2a4(&DAT_0919ba50);
    FUN_03f5c2a4(&DAT_0919ba30);
    FUN_03f5c2a4(&DAT_0919ba40);
    FUN_03f5c2a4(&DAT_0919b9e0);
    FUN_03f5c2a4(&DAT_0919ba60);
    FUN_03f5c2a4(&DAT_09185f18);
    FUN_03f5c2a4(&DAT_09187278);
    FUN_03f5c2a4(&DAT_091bcc98);
    FUN_03f5c2a4(&DAT_091bcc90);
    FUN_03f5c2a4(&DAT_091bcba0);
    FUN_03f5c2a4(&DAT_091bcc88);
    FUN_03f5c2a4(&DAT_091bcca0);
    FUN_03f5c2a4(&DAT_092215e0);
    DAT_095228af = 1;
  }
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  auVar3 = ZEXT816(0);
  auVar2 = ZEXT816(0);
  auVar1 = ZEXT816(0);
  iVar4 = *param_1;
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  local_88 = 0;
  if (iVar4 < 2) {
    if (iVar4 == 0) {
      local_40 = *(undefined1 (*) [16])(param_1 + 0xe);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      *param_1 = -1;
LAB_076f1a78:
      uVar10 = FUN_06daae34(local_40,DAT_0919b9d8);
      if ((uVar10 & 1) == 0) {
        uVar9 = *(undefined8 *)(param_1 + 8);
        uVar8 = thunk_FUN_03fc39d4(&DAT_09201948);
        uVar8 = Newtonsoft_Json_JsonReaderException__Create(uVar9,uVar8,0);
        uVar9 = thunk_FUN_03fc39d4(&DAT_091ebf20);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar8,uVar9);
      }
LAB_076f1b00:
      uVar8 = thunk_FUN_03f99350(*(undefined8 *)(param_1 + 8),DAT_09185f18);
      plVar7 = *(long **)(param_1 + 8);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
      if (3 < (int)uVar5) {
        if (uVar5 < 0x12) {
          if ((1 << (ulong)(uVar5 & 0x1f) & 0x30780U) != 0) {
            plVar7 = *(long **)(param_1 + 8);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar9 = (**(code **)(*plVar7 + 0x248))(plVar7,*(undefined8 *)(*plVar7 + 0x250));
            lVar6 = thunk_FUN_03f9944c(DAT_09187278);
            Newtonsoft_Json_Linq_JValue___ctor(lVar6,uVar9,0);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            Newtonsoft_Json_Linq_JToken__SetLineInfo(lVar6,uVar8,*(undefined8 *)(param_1 + 10));
            goto LAB_076f1a20;
          }
          if (uVar5 == 0xb) {
            lVar6 = Newtonsoft_Json_Linq_JValue__CreateNull(0);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            Newtonsoft_Json_Linq_JToken__SetLineInfo(lVar6,uVar8,*(undefined8 *)(param_1 + 10));
            goto LAB_076f1a20;
          }
          if (uVar5 == 0xc) {
            lVar6 = Newtonsoft_Json_Linq_JValue__CreateUndefined(0);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            Newtonsoft_Json_Linq_JToken__SetLineInfo(lVar6,uVar8,*(undefined8 *)(param_1 + 10));
            goto LAB_076f1a20;
          }
        }
        if (uVar5 != 4) {
          if (uVar5 != 5) {
LAB_076f1fa0:
            uVar8 = *(undefined8 *)(param_1 + 8);
            lVar6 = thunk_FUN_03fc39d4(&DAT_09182ff8);
            if (*(int *)(lVar6 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar9 = System_Globalization_CultureInfo__get_InvariantCulture(0);
            plVar7 = *(long **)(param_1 + 8);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            local_94[0] = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
            uVar11 = thunk_FUN_03fc39d4(&DAT_09187478);
            uVar11 = FUN_03f5c42c(uVar11,local_94);
            uVar12 = thunk_FUN_03fc39d4(&DAT_09201950);
            uVar9 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar12,uVar9,uVar11,0);
            uVar8 = Newtonsoft_Json_JsonReaderException__Create(uVar8,uVar9,0);
            uVar9 = thunk_FUN_03fc39d4(&DAT_091ebf20);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar8,uVar9);
          }
          plVar7 = *(long **)(param_1 + 8);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          plVar7 = (long *)(**(code **)(*plVar7 + 0x248))(plVar7,*(undefined8 *)(*plVar7 + 0x250));
          uVar9 = 0;
          if (plVar7 != (long *)0x0) {
            uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
          }
          lVar6 = Newtonsoft_Json_Linq_JValue__CreateComment(uVar9,0);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          Newtonsoft_Json_Linq_JToken__SetLineInfo(lVar6,uVar8,*(undefined8 *)(param_1 + 10));
          goto LAB_076f1a20;
        }
        lVar6 = Newtonsoft_Json_Linq_JProperty__LoadAsync
                          (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10),
                           *(undefined8 *)(param_1 + 0xc));
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        local_80 = FUN_062ee72c(lVar6,0,DAT_091bcca0);
        uVar10 = FUN_06dab310(local_80,DAT_0919ba60);
        if ((uVar10 & 1) == 0) {
          *param_1 = 4;
          *(undefined1 (*) [16])(param_1 + 0x1e) = local_80;
          thunk_FUN_03f5d7b8(param_1 + 0x1e,0);
          if (*(int *)(DAT_09175278 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_045e0af8(param_1 + 2,local_80,param_1,DAT_09198d60);
          return;
        }
        goto LAB_076f1978;
      }
      if (uVar5 != 1) {
        if (uVar5 != 2) {
          if (uVar5 != 3) goto LAB_076f1fa0;
          lVar6 = Newtonsoft_Json_Linq_JConstructor__LoadAsync
                            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10),
                             *(undefined8 *)(param_1 + 0xc));
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          local_70 = FUN_062ee72c(lVar6,0,DAT_091bcc90);
          uVar10 = FUN_06dab310(local_70,DAT_0919ba40);
          auVar3 = local_40;
          if ((uVar10 & 1) == 0) {
            *param_1 = 3;
            *(undefined1 (*) [16])(param_1 + 0x1a) = local_70;
            thunk_FUN_03f5d7b8(param_1 + 0x1a,0);
            if (*(int *)(DAT_09175278 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            FUN_045e0af8(param_1 + 2,local_70,param_1,DAT_09198d50);
            return;
          }
          goto LAB_076f1a08;
        }
        lVar6 = Newtonsoft_Json_Linq_JArray__LoadAsync
                          (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10),
                           *(undefined8 *)(param_1 + 0xc),0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        local_60 = FUN_062ee72c(lVar6,0,DAT_091bcc88);
        uVar10 = FUN_06dab310(local_60,DAT_0919ba30);
        auVar2 = local_40;
        if ((uVar10 & 1) == 0) {
          *param_1 = 2;
          *(undefined1 (*) [16])(param_1 + 0x16) = local_60;
          thunk_FUN_03f5d7b8(param_1 + 0x16,0);
          if (*(int *)(DAT_09175278 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_045e0af8(param_1 + 2,local_60,param_1,DAT_09198d48);
          return;
        }
        goto LAB_076f19dc;
      }
      lVar6 = Newtonsoft_Json_Linq_JObject__LoadAsync
                        (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10),
                         *(undefined8 *)(param_1 + 0xc));
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_50 = FUN_062ee72c(lVar6,0,DAT_091bcc98);
      uVar10 = FUN_06dab310(local_50,DAT_0919ba50);
      auVar1 = local_40;
      if ((uVar10 & 1) == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0x12) = local_50;
        thunk_FUN_03f5d7b8(param_1 + 0x12,0);
        if (*(int *)(DAT_09175278 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_045e0af8(param_1 + 2,local_50,param_1,DAT_09198d58);
        return;
      }
    }
    else {
      if (iVar4 != 1) {
LAB_076f1acc:
        Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull
                  (*(undefined8 *)(param_1 + 8),DAT_092215e0,0);
        plVar7 = *(long **)(param_1 + 8);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar4 = (**(code **)(*plVar7 + 0x238))(plVar7,*(undefined8 *)(*plVar7 + 0x240));
        if (iVar4 == 0) {
          if ((*(long *)(param_1 + 10) == 0) || (*(int *)(*(long *)(param_1 + 10) + 0x10) != 0)) {
            plVar7 = *(long **)(param_1 + 8);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar6 = (**(code **)(*plVar7 + 0x188))
                              (plVar7,*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(*plVar7 + 400))
            ;
          }
          else {
            if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar6 = Newtonsoft_Json_JsonReader__ReadAndMoveToContentAsync
                              (*(long *)(param_1 + 8),*(undefined8 *)(param_1 + 0xc),0);
          }
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          local_40 = FUN_062e82b0(lVar6,0,DAT_091bcba0);
          uVar10 = FUN_06daadec(local_40,DAT_0919b9e0);
          if ((uVar10 & 1) == 0) {
            *param_1 = 0;
            *(undefined1 (*) [16])(param_1 + 0xe) = local_40;
            thunk_FUN_03f5d7b8(param_1 + 0xe,0);
            if (*(int *)(DAT_09175278 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            FUN_045deb00(param_1 + 2,local_40,param_1,DAT_09198d40);
            return;
          }
          goto LAB_076f1a78;
        }
        goto LAB_076f1b00;
      }
      local_50 = *(undefined1 (*) [16])(param_1 + 0x12);
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      *param_1 = -1;
    }
    local_40 = auVar1;
    lVar6 = FUN_06dab358(local_50,DAT_0919ba48);
  }
  else {
    if (iVar4 == 2) {
      local_60 = *(undefined1 (*) [16])(param_1 + 0x16);
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      *param_1 = -1;
LAB_076f19dc:
      local_40 = auVar2;
      lVar6 = FUN_06dab358(local_60,DAT_0919ba28);
      goto LAB_076f1a20;
    }
    if (iVar4 == 3) {
      local_70 = *(undefined1 (*) [16])(param_1 + 0x1a);
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      *param_1 = -1;
LAB_076f1a08:
      local_40 = auVar3;
      lVar6 = FUN_06dab358(local_70,DAT_0919ba38);
      goto LAB_076f1a20;
    }
    if (iVar4 != 4) goto LAB_076f1acc;
    local_80 = *(undefined1 (*) [16])(param_1 + 0x1e);
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    *param_1 = -1;
    local_40 = ZEXT816(0);
LAB_076f1978:
    lVar6 = FUN_06dab358(local_80,DAT_0919ba58);
  }
LAB_076f1a20:
  iVar4 = *(int *)(DAT_09175278 + 0xe4);
  *param_1 = -2;
  if (iVar4 == 0) {
    FUN_03f5c424();
  }
  FUN_069f7d10(param_1 + 2,lVar6,DAT_09198d80);
  return;
}

