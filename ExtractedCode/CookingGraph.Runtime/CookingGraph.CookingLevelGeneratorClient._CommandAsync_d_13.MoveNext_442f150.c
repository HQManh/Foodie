// rea decompile_all
// name: CookingGraph.CookingLevelGeneratorClient.<CommandAsync>d__13$$MoveNext
// address: 0x442f150
// body: available
// range: 0x442f150-0x442fa13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x442f938 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442f940 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442f948 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442f94c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442f954 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442f9f0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442f9f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442f9f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442f9fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442fa00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442fa04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442fa08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0442f944) */
/* WARNING: Removing unreachable block (ram,0x0442f938) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CookingGraph_CookingLevelGeneratorClient_<CommandAsync>d__13__MoveNext(uint *param_1)

{
  undefined1 auVar1 [16];
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar11;
  int *piVar12;
  long *plVar13;
  uint *puVar14;
  int iVar15;
  long lVar16;
  undefined8 uStack_80;
  int local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  uint local_3c;
  uint *local_38;
  
  local_38 = param_1;
  if ((DAT_09517f9a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0250);
    FUN_03f5c2a4(&DAT_09198c80);
    FUN_03f5c2a4(&DAT_09198c78);
    FUN_03f5c2a4(&DAT_09198cb0);
    FUN_03f5c2a4(&DAT_09175260);
    FUN_03f5c2a4(&DAT_0919b920);
    FUN_03f5c2a4(&DAT_0919b960);
    FUN_03f5c2a4(&DAT_0919ba88);
    FUN_03f5c2a4(&DAT_0919ba08);
    FUN_03f5c2a4(&DAT_0919ba90);
    FUN_03f5c2a4(&DAT_0919ba10);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09187220);
    FUN_03f5c2a4(&DAT_091d13a8);
    FUN_03f5c2a4(&DAT_09187250);
    FUN_03f5c2a4(&DAT_091b6a50);
    FUN_03f5c2a4(&DAT_091b6a60);
    FUN_03f5c2a4(&DAT_0918b380);
    FUN_03f5c2a4(&DAT_091bcc30);
    FUN_03f5c2a4(&DAT_091bcd00);
    FUN_03f5c2a4(&DAT_09220338);
    FUN_03f5c2a4(&DAT_09217840);
    FUN_03f5c2a4(&DAT_0921f5b0);
    FUN_03f5c2a4(&DAT_09220a40);
    FUN_03f5c2a4(&DAT_0921d180);
    FUN_03f5c2a4(&DAT_0921a200);
    DAT_09517f9a = 1;
  }
  local_3c = *param_1;
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_70._8_8_ = 0;
  lVar16 = *(long *)(param_1 + 0xc);
  local_70._0_8_ = 0;
  local_78 = 0;
  auVar1 = ZEXT816(0);
  if (1 < local_3c) {
    lVar3 = thunk_FUN_03f9944c(DAT_09187220);
    Newtonsoft_Json_Linq_JObject___ctor(lVar3,0);
    local_50 = System_Guid__NewGuid(0);
    uVar4 = System_Guid__ToString(local_50,0);
    if (*(int *)(DAT_09187250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = Newtonsoft_Json_Linq_JToken__op_Implicit(uVar4,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    Newtonsoft_Json_Linq_JObject__set_Item(lVar3,DAT_0921d180,uVar4,0);
    uVar4 = Newtonsoft_Json_Linq_JToken__op_Implicit(*(undefined8 *)(local_38 + 8),0);
    Newtonsoft_Json_Linq_JObject__set_Item(lVar3,DAT_0921f5b0,uVar4,0);
    Newtonsoft_Json_Linq_JObject__set_Item(lVar3,DAT_09220a40,*(undefined8 *)(local_38 + 10),0);
    lVar5 = DAT_091c0250;
    lVar11 = *(long *)(DAT_091c0250 + 0x38);
    if (lVar11 == 0) {
      FUN_03f95ac8(DAT_091c0250);
      lVar11 = *(long *)(lVar5 + 0x38);
    }
    lVar11 = *(long *)(lVar11 + 0x10);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_03f95a6c();
    }
    if (*(int *)(lVar11 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    uVar4 = Newtonsoft_Json_Linq_JToken__ToString(lVar3,0,**(undefined8 **)(lVar5 + 0xb8),0);
    uVar6 = System_Text_Encoding__get_UTF8(0);
    uVar7 = thunk_FUN_03f9944c(DAT_0918b380);
    System_Net_Http_StringContent___ctor(uVar7,uVar4,uVar6,DAT_09217840,0);
    *(undefined8 *)(local_38 + 0x10) = uVar7;
    thunk_FUN_03f5d7b8(local_38 + 0x10,uVar7);
    auVar1 = local_50;
  }
  if (local_3c == 0) {
    local_3c = 0xffffffff;
    local_60 = *(undefined1 (*) [16])(local_38 + 0x14);
    local_38[0x14] = 0;
    local_38[0x15] = 0;
    local_38[0x16] = 0;
    local_38[0x17] = 0;
    *local_38 = 0xffffffff;
LAB_0442f514:
    local_50 = auVar1;
    uVar4 = FUN_06dab358(local_60,DAT_0919ba08);
    *(undefined8 *)(local_38 + 0x12) = uVar4;
    thunk_FUN_03f5d7b8();
    auVar1 = local_50;
    if (local_3c == 1) goto LAB_0442f554;
    if (*(long *)(local_38 + 0x12) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar16 = *(long *)(*(long *)(local_38 + 0x12) + 0x38);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar16 = System_Net_Http_HttpContent__ReadAsStringAsync(lVar16,0);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_70 = FUN_062ee72c(lVar16,0,DAT_091bcd00);
    uVar9 = FUN_06dab310(local_70,DAT_0919ba90);
    if ((uVar9 & 1) != 0) goto LAB_0442f570;
    local_3c = 1;
    *local_38 = 1;
    *(undefined1 (*) [16])(local_38 + 0x18) = local_70;
    thunk_FUN_03f5d7b8(local_38 + 0x18,0);
    puVar14 = local_38;
    if (*(int *)(DAT_09175260 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09175260,extraout_x1,local_38);
    }
    FUN_045e0420(puVar14 + 2,local_70,local_38,DAT_09198c80);
    plVar8 = (long *)0x0;
    iVar15 = 6;
  }
  else {
    if (local_3c != 1) {
      local_50 = auVar1;
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar16 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar16 = System_Net_Http_HttpClient__PostAsync
                         (*(long *)(lVar16 + 0x10),*(undefined8 *)(lVar16 + 0x18),
                          *(undefined8 *)(local_38 + 0x10),*(undefined8 *)(local_38 + 0xe),0);
      if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_60 = FUN_062ee72c(lVar16,0,DAT_091bcc30);
      uVar9 = FUN_06dab310(local_60,DAT_0919ba10);
      auVar1 = local_50;
      if ((uVar9 & 1) == 0) {
        local_3c = 0;
        *local_38 = 0;
        *(undefined1 (*) [16])(local_38 + 0x14) = local_60;
        thunk_FUN_03f5d7b8(local_38 + 0x14,0);
        puVar14 = local_38;
        if (*(int *)(DAT_09175260 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09175260,extraout_x1_00,local_38);
        }
        FUN_045e0420(puVar14 + 2,local_60,local_38,DAT_09198c78);
        plVar8 = (long *)0x0;
        iVar15 = 6;
        goto LAB_0442f800;
      }
      goto LAB_0442f514;
    }
LAB_0442f554:
    local_3c = 0xffffffff;
    local_70 = *(undefined1 (*) [16])(local_38 + 0x18);
    local_38[0x18] = 0;
    local_38[0x19] = 0;
    local_38[0x1a] = 0;
    local_38[0x1b] = 0;
    *local_38 = 0xffffffff;
    local_50 = auVar1;
LAB_0442f570:
    uVar4 = FUN_06dab358(local_70,DAT_0919ba88);
    plVar8 = (long *)Newtonsoft_Json_Linq_JObject__Parse(uVar4,0);
    if (*(long *)(local_38 + 0x12) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar9 = System_Net_Http_HttpResponseMessage__get_IsSuccessStatusCode
                      (*(long *)(local_38 + 0x12),0);
    uVar4 = DAT_09220338;
    if ((uVar9 & 1) == 0) {
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
LAB_0442f958:
      lVar16 = thunk_FUN_03fc39d4(&DAT_091d13b8);
      uVar4 = thunk_FUN_03fc39d4(&DAT_0921b0c8);
      lVar16 = FUN_03f5c420(*(undefined8 *)
                             (*plVar8 + (ulong)*(ushort *)(lVar16 + 0x50) * 0x10 + 0x140),lVar16);
      lVar16 = (**(code **)(lVar16 + 8))(plVar8,uVar4,lVar16);
      if (lVar16 == 0) {
        lVar16 = thunk_FUN_03fc39d4(&DAT_09203410);
      }
      thunk_FUN_03fc39d4(&DAT_091870e0);
      uVar4 = thunk_FUN_03f9944c();
      System_InvalidOperationException___ctor(uVar4,lVar16,0);
      uVar6 = thunk_FUN_03fc39d4(&DAT_091e7460);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar6);
    }
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar16 = FUN_03f5c420(*(undefined8 *)
                           (*plVar8 + (ulong)*(ushort *)(DAT_091d13a8 + 0x50) * 0x10 + 0x140));
    uVar2 = (**(code **)(lVar16 + 8))(plVar8,uVar4,lVar16);
    if ((uVar2 < 0x100) || ((uVar2 & 0xff) == 0)) goto LAB_0442f958;
    plVar8 = (long *)Newtonsoft_Json_Linq_JObject__get_Item(plVar8,DAT_0921a200,0);
    if (plVar8 != (long *)0x0) {
      if ((*(byte *)(*plVar8 + 0x130) < *(byte *)(DAT_09187220 + 0x130)) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)*(byte *)(DAT_09187220 + 0x130) * 8 + -8) !=
          DAT_09187220)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar8);
      }
    }
    iVar15 = 0xe;
  }
  if (((int)local_3c < 0) && (plVar13 = *(long **)(local_38 + 0x12), plVar13 != (long *)0x0)) {
    lVar16 = *plVar13;
    uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar9 != 0) {
      piVar12 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_09185a58) {
          puVar10 = (undefined8 *)(lVar16 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0442f7f0;
        }
        uVar9 = uVar9 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)FUN_03f95da8(plVar13,DAT_09185a58,0);
LAB_0442f7f0:
    (*(code *)*puVar10)(plVar13,puVar10[1]);
  }
LAB_0442f800:
  if (((int)local_3c < 0) && (plVar13 = *(long **)(local_38 + 0x10), plVar13 != (long *)0x0)) {
    lVar16 = *plVar13;
    uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar9 != 0) {
      piVar12 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_09185a58) {
          puVar10 = (undefined8 *)(lVar16 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_0442f870;
        }
        uVar9 = uVar9 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar9 != 0);
    }
    puVar10 = (undefined8 *)FUN_03f95da8(plVar13,DAT_09185a58,0);
LAB_0442f870:
    (*(code *)*puVar10)(plVar13,puVar10[1]);
  }
  lVar16 = DAT_09175260;
  if (iVar15 == 0xe) {
    puVar14 = local_38 + 2;
    *local_38 = 0xfffffffe;
    if (*(int *)(lVar16 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_069f7d10(puVar14,plVar8,DAT_09198cb0);
  }
  else if (iVar15 == 0) {
    uVar4 = (&uStack_80)[local_78 + -1];
    puVar14 = local_38 + 2;
    *local_38 = 0xfffffffe;
    lVar16 = thunk_FUN_03fc39d4(&DAT_09175260);
    if (*(int *)(lVar16 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = thunk_FUN_03fc39d4(&DAT_09198ca8);
    FUN_069f7f5c(puVar14,uVar4,uVar6);
  }
  return;
}

