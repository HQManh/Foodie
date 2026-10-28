// rea decompile_all
// name: Newtonsoft.Json.Linq.JsonPath.ArraySliceFilter.<ExecuteFilter>d__12$$MoveNext
// address: 0x76fa280
// body: available
// range: 0x76fa280-0x76fa46f inclusive
// range: 0x76fa484-0x76faabf inclusive
// range: 0x76fab88-0x76fab9b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76fa41c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fa464 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fa468 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fa46c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fa634 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fa66c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fa8a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fa8a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fa8ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fa8b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fa8b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76fa8b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076fab88) */

undefined8
Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter_<ExecuteFilter>d__12__MoveNext(long param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  long lVar18;
  undefined4 local_4c;
  long local_48;
  
  local_48 = param_1;
  if ((DAT_09522911 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a5d0);
    FUN_03f5c2a4(&DAT_0917ac98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09187200);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091b6fa0);
    FUN_03f5c2a4(&DAT_091b6fb8);
    DAT_09522911 = 1;
  }
  lVar18 = *(long *)(param_1 + 0x28);
  local_4c = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    iVar4 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x6c);
    *(int *)(param_1 + 0x6c) = iVar4;
    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar7 = *(int *)(param_1 + 100);
    cVar1 = *(char *)(param_1 + 0x68);
    goto LAB_076fa7f8;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(0);
  }
  local_4c = 0;
  if ((*(ulong *)(lVar18 + 0x20) >> 0x20 == 0) && ((*(ulong *)(lVar18 + 0x20) & 0xff) != 0)) {
    thunk_FUN_03fc39d4(&DAT_09187348);
    uVar9 = thunk_FUN_03f9944c();
    uVar10 = thunk_FUN_03fc39d4(&DAT_0920da40);
    Newtonsoft_Json_JsonException___ctor(uVar9,uVar10,0);
    uVar10 = thunk_FUN_03fc39d4(&DAT_091e5ac8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar9,uVar10);
  }
  plVar17 = *(long **)(param_1 + 0x30);
  if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(0);
  }
  lVar14 = *plVar17;
  uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == DAT_0917a5d0) {
        puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_076fa3f0;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar8 = (undefined8 *)FUN_03f95da8(plVar17,DAT_0917a5d0,0);
LAB_076fa3f0:
  uVar9 = (*(code *)*puVar8)(plVar17,puVar8[1]);
  *(undefined8 *)(local_48 + 0x50) = uVar9;
  thunk_FUN_03f5d7b8();
  *(undefined4 *)(local_48 + 0x10) = 0xfffffffd;
  do {
    plVar17 = *(long **)(local_48 + 0x50);
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar14 = *plVar17;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == DAT_09185b10) {
          puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_076fa4d8;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(plVar17,DAT_09185b10,0);
LAB_076fa4d8:
    uVar15 = (*(code *)*puVar8)(plVar17,puVar8[1]);
    if ((uVar15 & 1) == 0) {
      Newtonsoft_Json_Linq_JsonPath_ArraySliceFilter_<ExecuteFilter>d__12__<>m__Finally1();
      *(undefined8 *)(local_48 + 0x50) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(local_48 + 0x50),0);
      return 0;
    }
    plVar17 = *(long **)(local_48 + 0x50);
    if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar14 = *plVar17;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == DAT_0917ac98) {
          puVar8 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_076fa544;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(plVar17,DAT_0917ac98,0);
LAB_076fa544:
    plVar17 = (long *)(*(code *)*puVar8)(plVar17,puVar8[1]);
    lVar14 = DAT_09187200;
    if (plVar17 == (long *)0x0) {
      *(undefined8 *)(local_48 + 0x58) = 0;
      plVar13 = (long *)0x0;
    }
    else {
      bVar2 = *(byte *)(DAT_09187200 + 0x130);
      plVar13 = (long *)0x0;
      if ((bVar2 <= *(byte *)(*plVar17 + 0x130)) &&
         (plVar13 = plVar17,
         *(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar2 * 8 + -8) != DAT_09187200)) {
        plVar13 = (long *)0x0;
      }
      *(long **)(local_48 + 0x58) = plVar13;
      if (*(byte *)(*plVar17 + 0x130) < bVar2) {
        plVar13 = (long *)0x0;
      }
      else {
        plVar13 = plVar17;
        if (*(long *)(*(long *)(*plVar17 + 200) + (ulong)bVar2 * 8 + -8) != lVar14) {
          plVar13 = (long *)0x0;
        }
      }
    }
    thunk_FUN_03f5d7b8(local_48 + 0x58,plVar13);
    if (*(long *)(local_48 + 0x58) == 0) {
      param_1 = local_48;
      if ((*(long *)(local_48 + 0x40) != 0) &&
         (*(char *)(*(long *)(local_48 + 0x40) + 0x20) != '\0')) {
        lVar18 = thunk_FUN_03fc39d4(&DAT_09182ff8);
        if (*(int *)(lVar18 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar9 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        if (plVar17 != (long *)0x0) {
          plVar17 = (long *)System_Object__GetType(plVar17,0);
          if (plVar17 != (long *)0x0) {
            uVar10 = (**(code **)(*plVar17 + 0x1b8))(plVar17,*(undefined8 *)(*plVar17 + 0x1c0));
            uVar11 = thunk_FUN_03fc39d4(&DAT_091fbf50);
            uVar9 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar11,uVar9,uVar10,0);
            thunk_FUN_03fc39d4(&DAT_09187348);
            uVar10 = thunk_FUN_03f9944c();
            Newtonsoft_Json_JsonException___ctor(uVar10,uVar9,0);
            uVar9 = thunk_FUN_03fc39d4(&DAT_091e5ac8);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar10,uVar9);
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    else {
      if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar4 = (int)(*(ulong *)(lVar18 + 0x20) >> 0x20);
      if ((*(ulong *)(lVar18 + 0x20) & 0xff) == 0) {
        iVar4 = 1;
      }
      *(int *)(local_48 + 0x60) = iVar4;
      uVar15 = *(ulong *)(lVar18 + 0x10) >> 0x20;
      if (((*(ulong *)(lVar18 + 0x10) & 0xff) == 0) && (uVar15 = 0, iVar4 < 1)) {
        iVar4 = Newtonsoft_Json_Linq_JContainer__get_Count(*(long *)(local_48 + 0x58),0);
        uVar15 = (ulong)(iVar4 - 1);
      }
      lVar14 = local_48;
      if ((*(ulong *)(lVar18 + 0x18) & 0xff) == 0) {
        uVar5 = 0xffffffff;
        if (0 < *(int *)(local_48 + 0x60)) {
          if (*(long *)(local_48 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar5 = Newtonsoft_Json_Linq_JContainer__get_Count(*(long *)(local_48 + 0x58),0);
        }
      }
      else {
        uVar5 = (undefined4)(*(ulong *)(lVar18 + 0x18) >> 0x20);
        if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      *(undefined4 *)(lVar14 + 100) = uVar5;
      local_4c = 0;
      if (((long)*(ulong *)(lVar18 + 0x10) < 0) && ((*(ulong *)(lVar18 + 0x10) & 0xff) != 0)) {
        if (*(long *)(local_48 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar4 = Newtonsoft_Json_Linq_JContainer__get_Count(*(long *)(local_48 + 0x58),0);
        uVar15 = (ulong)(uint)(iVar4 + (int)uVar15);
      }
      local_4c = 0;
      if (((long)*(ulong *)(lVar18 + 0x18) < 0) && ((*(ulong *)(lVar18 + 0x18) & 0xff) != 0)) {
        if (*(long *)(local_48 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar4 = Newtonsoft_Json_Linq_JContainer__get_Count(*(long *)(local_48 + 0x58),0);
        *(int *)(local_48 + 100) = *(int *)(local_48 + 100) + iVar4;
      }
      iVar4 = *(int *)(local_48 + 0x60);
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_Math__Max(uVar15,(uint)(iVar4 < 1) << 0x1f,0);
      lVar14 = *(long *)(local_48 + 0x58);
      if (*(int *)(local_48 + 0x60) < 1) {
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar4 = Newtonsoft_Json_Linq_JContainer__get_Count(lVar14,0);
        iVar4 = iVar4 + -1;
      }
      else {
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar4 = Newtonsoft_Json_Linq_JContainer__get_Count(lVar14,0);
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar4 = System_Math__Min(uVar5,iVar4,0);
      uVar5 = System_Math__Max(*(undefined4 *)(local_48 + 100),0xffffffff,0);
      *(undefined4 *)(local_48 + 100) = uVar5;
      if (*(long *)(local_48 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar6 = Newtonsoft_Json_Linq_JContainer__get_Count(*(long *)(local_48 + 0x58),0);
      iVar7 = System_Math__Min(uVar5,uVar6,0);
      *(int *)(local_48 + 100) = iVar7;
      cVar1 = 0 < *(int *)(local_48 + 0x60);
      bVar3 = iVar4 < iVar7;
      if (*(int *)(local_48 + 0x60) < 1) {
        bVar3 = iVar7 < iVar4;
      }
      *(char *)(local_48 + 0x68) = cVar1;
      param_1 = local_48;
      if (bVar3) {
        *(int *)(local_48 + 0x6c) = iVar4;
LAB_076fa7f8:
        bVar3 = iVar7 < iVar4;
        if (cVar1 != '\0') {
          bVar3 = iVar4 < iVar7;
        }
        if (bVar3) {
          if (*(long *)(param_1 + 0x58) != 0) {
            uVar9 = Newtonsoft_Json_Linq_JArray__get_Item(*(long *)(param_1 + 0x58),iVar4,0);
            *(undefined8 *)(local_48 + 0x18) = uVar9;
            thunk_FUN_03f5d7b8();
            *(undefined4 *)(local_48 + 0x10) = 1;
            return 1;
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      else if ((*(long *)(local_48 + 0x40) != 0) &&
              (*(char *)(*(long *)(local_48 + 0x40) + 0x20) != '\0')) {
        lVar14 = thunk_FUN_03fc39d4(&DAT_09182ff8);
        if (*(int *)(lVar14 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar9 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        cVar1 = *(char *)(lVar18 + 0x10);
        thunk_FUN_03fc39d4(&DAT_091b6fb8);
        if (cVar1 == '\0') {
          uVar10 = thunk_FUN_03fc39d4(&DAT_091fbf58);
          uVar11 = thunk_FUN_03fc39d4(&DAT_091f8568);
        }
        else {
          uVar10 = thunk_FUN_03fc39d4(&DAT_091fbf58);
          uVar11 = *(undefined8 *)(lVar18 + 0x10);
          thunk_FUN_03fc39d4(&DAT_091b6fa0);
          local_4c = (undefined4)((ulong)uVar11 >> 0x20);
          lVar14 = thunk_FUN_03fc39d4(&DAT_09182ff8);
          if (*(int *)(lVar14 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar11 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          uVar11 = System_Int32__ToString(&local_4c,uVar11,0);
        }
        cVar1 = *(char *)(lVar18 + 0x18);
        thunk_FUN_03fc39d4(&DAT_091b6fb8);
        if (cVar1 == '\0') {
          uVar12 = thunk_FUN_03fc39d4(&DAT_091f8568);
        }
        else {
          uVar12 = *(undefined8 *)(lVar18 + 0x18);
          thunk_FUN_03fc39d4(&DAT_091b6fa0);
          local_4c = (undefined4)((ulong)uVar12 >> 0x20);
          lVar18 = thunk_FUN_03fc39d4(&DAT_09182ff8);
          if (*(int *)(lVar18 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar12 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          uVar12 = System_Int32__ToString(&local_4c,uVar12,0);
        }
        uVar9 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar10,uVar9,uVar11,uVar12,0);
        thunk_FUN_03fc39d4(&DAT_09187348);
        uVar10 = thunk_FUN_03f9944c();
        Newtonsoft_Json_JsonException___ctor(uVar10,uVar9,0);
        uVar9 = thunk_FUN_03fc39d4(&DAT_091e5ac8);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar10,uVar9);
      }
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x58),0);
  } while( true );
}

