// rea decompile_all
// name: Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter.<ExecuteFilter>d__2$$MoveNext
// address: 0x76fba64
// body: available
// range: 0x76fba64-0x76fbbcb inclusive
// range: 0x76fbbd4-0x76fbf9b inclusive
// range: 0x76fbffc-0x76fc14f inclusive
// range: 0x76fc198-0x76fc1ab inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76fbbc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fbdb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fbdd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fbdd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fbddc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fbde0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fbf20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fbf38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fbf98 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fc148 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fc14c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fc1a8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<ExecuteFilter>d__2__MoveNext(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_60;
  long *plStack_58;
  long local_48;
  
  local_48 = param_1;
  if ((DAT_0952291c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_0917a5d0);
    FUN_03f5c2a4(&DAT_0917ac98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09187220);
    FUN_03f5c2a4(&DAT_091b05a8);
    DAT_0952291c = 1;
  }
  plStack_58 = &local_48;
  lVar13 = *(long *)(param_1 + 0x38);
  local_60 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
    goto LAB_076fc02c;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
LAB_076fbbd4:
    uVar3 = 0;
LAB_076fc0a4:
    lVar13 = local_60;
    if (local_60 != 0) {
      FUN_03ebcd20(&plStack_58);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548(lVar13);
    }
    return uVar3;
  }
  plVar11 = *(long **)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar8 = *plVar11;
  uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar9 != 0) {
    piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == DAT_0917a5d0) {
        puVar2 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_076fbb9c;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a5d0,0);
LAB_076fbb9c:
  uVar3 = (*(code *)*puVar2)(plVar11,puVar2[1]);
  *(undefined8 *)(local_48 + 0x50) = uVar3;
  thunk_FUN_03f5d7b8();
  *(undefined4 *)(local_48 + 0x10) = 0xfffffffd;
  do {
    plVar11 = *(long **)(local_48 + 0x50);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_09185b10) {
          puVar2 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_076fbc30;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185b10,0);
LAB_076fbc30:
    uVar9 = (*(code *)*puVar2)(plVar11,puVar2[1]);
    if ((uVar9 & 1) == 0) {
      Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<ExecuteFilter>d__2__<>m__Finally1();
      *(undefined8 *)(local_48 + 0x50) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(local_48 + 0x50),0);
      goto LAB_076fbbd4;
    }
    plVar11 = *(long **)(local_48 + 0x50);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_0917ac98) {
          puVar2 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_076fbc9c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917ac98,0);
LAB_076fbc9c:
    plVar11 = (long *)(*(code *)*puVar2)(plVar11,puVar2[1]);
    lVar8 = DAT_09187220;
    if (plVar11 == (long *)0x0) {
      *(undefined8 *)(local_48 + 0x58) = 0;
      plVar7 = (long *)0x0;
    }
    else {
      bVar1 = *(byte *)(DAT_09187220 + 0x130);
      plVar7 = (long *)0x0;
      if ((bVar1 <= *(byte *)(*plVar11 + 0x130)) &&
         (plVar7 = plVar11,
         *(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != DAT_09187220)) {
        plVar7 = (long *)0x0;
      }
      *(long **)(local_48 + 0x58) = plVar7;
      if (*(byte *)(*plVar11 + 0x130) < bVar1) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = plVar11;
        if (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != lVar8) {
          plVar7 = (long *)0x0;
        }
      }
    }
    thunk_FUN_03f5d7b8(local_48 + 0x58,plVar7);
    if (*(long *)(local_48 + 0x58) == 0) {
      if ((*(long *)(local_48 + 0x40) != 0) &&
         (*(char *)(*(long *)(local_48 + 0x40) + 0x20) != '\0')) {
        lVar8 = thunk_FUN_03fc39d4(&DAT_09182ff8);
        if (*(int *)(lVar8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar6 = *(undefined8 *)(lVar13 + 0x10);
        lVar13 = thunk_FUN_03fc39d4(&DAT_09190928);
        if (*(int *)(lVar13 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar13 = thunk_FUN_03fc39d4(&DAT_09190928);
        lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 8);
        if (lVar13 == 0) {
          uVar12 = thunk_FUN_03fc39d4(&DAT_091f86e8);
          uVar4 = thunk_FUN_03fc39d4(&DAT_0920af68);
          lVar13 = thunk_FUN_03fc39d4(&DAT_09190928);
          if (*(int *)(lVar13 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar13 = thunk_FUN_03fc39d4(&DAT_09190928);
          uVar14 = **(undefined8 **)(lVar13 + 0xb8);
          thunk_FUN_03fc39d4(&DAT_091790b8);
          lVar13 = thunk_FUN_03f9944c();
          uVar5 = thunk_FUN_03fc39d4(&DAT_091ea0a0);
          FUN_05324070(lVar13,uVar14,uVar5,0);
          lVar8 = thunk_FUN_03fc39d4(&DAT_09190928);
          *(long *)(*(long *)(lVar8 + 0xb8) + 8) = lVar13;
          lVar8 = thunk_FUN_03fc39d4(&DAT_09190928);
          thunk_FUN_03f5d7b8(*(long *)(lVar8 + 0xb8) + 8,lVar13);
        }
        else {
          uVar12 = thunk_FUN_03fc39d4(&DAT_091f86e8);
          uVar4 = thunk_FUN_03fc39d4(&DAT_0920af68);
        }
        uVar5 = thunk_FUN_03fc39d4(&DAT_091ca748);
        uVar6 = FUN_04af8044(uVar6,lVar13,uVar5);
        uVar6 = System_String__Join(uVar12,uVar6,0);
        if (plVar11 != (long *)0x0) {
          plVar11 = (long *)System_Object__GetType(plVar11,0);
          if (plVar11 != (long *)0x0) {
            uVar12 = (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
            uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar4,uVar3,uVar6,uVar12,0);
            thunk_FUN_03fc39d4(&DAT_09187348);
            uVar6 = thunk_FUN_03f9944c();
            Newtonsoft_Json_JsonException___ctor(uVar6,uVar3,0);
            uVar3 = thunk_FUN_03fc39d4(&DAT_091ea0a8);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar6,uVar3);
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    else {
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar13 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_057e185c(&local_98,*(long *)(lVar13 + 0x10),DAT_091b05a8);
      uStack_78 = uStack_90;
      local_80 = local_98;
      local_70 = local_88;
      *(undefined8 *)(local_48 + 0x68) = uStack_90;
      *(undefined8 *)(local_48 + 0x60) = local_98;
      *(undefined8 *)(local_48 + 0x70) = local_88;
      thunk_FUN_03f5d7b8(local_48 + 0x60,0);
      *(undefined4 *)(local_48 + 0x10) = 0xfffffffc;
      while (uVar9 = FUN_071bd28c(local_48 + 0x60,DAT_091a45a0), (uVar9 & 1) != 0) {
        *(undefined8 *)(local_48 + 0x78) = *(undefined8 *)(local_48 + 0x70);
        thunk_FUN_03f5d7b8();
        if (*(long *)(local_48 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar8 = Newtonsoft_Json_Linq_JObject__get_Item
                          (*(long *)(local_48 + 0x58),*(undefined8 *)(local_48 + 0x78),0);
        param_1 = local_48;
        if (lVar8 != 0) {
          *(long *)(local_48 + 0x18) = lVar8;
          thunk_FUN_03f5d7b8((long *)(local_48 + 0x18));
          uVar3 = 1;
          *(undefined4 *)(local_48 + 0x10) = 1;
          goto LAB_076fc0a4;
        }
LAB_076fc02c:
        if ((*(long *)(param_1 + 0x40) != 0) &&
           (*(char *)(*(long *)(param_1 + 0x40) + 0x20) != '\0')) {
          lVar13 = thunk_FUN_03fc39d4(&DAT_09182ff8);
          if (*(int *)(lVar13 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          uVar12 = *(undefined8 *)(local_48 + 0x78);
          uVar6 = thunk_FUN_03fc39d4(&DAT_0920af80);
          uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar6,uVar3,uVar12,0);
          thunk_FUN_03fc39d4(&DAT_09187348);
          uVar6 = thunk_FUN_03f9944c();
          Newtonsoft_Json_JsonException___ctor(uVar6,uVar3,0);
          uVar3 = thunk_FUN_03fc39d4(&DAT_091ea0a8);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar6,uVar3);
        }
        *(undefined8 *)(param_1 + 0x78) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x78),0);
      }
      Newtonsoft_Json_Linq_JsonPath_FieldMultipleFilter_<ExecuteFilter>d__2__<>m__Finally2();
      *(undefined8 *)(local_48 + 0x68) = 0;
      *(undefined8 *)(local_48 + 0x70) = 0;
      *(undefined8 *)(local_48 + 0x60) = 0;
    }
    *(undefined8 *)(local_48 + 0x58) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(local_48 + 0x58),0);
  } while( true );
}

