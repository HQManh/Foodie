// rea decompile_all
// name: System.DateTimeParse$$ParseISO8601
// address: 0x75a704c
// body: available
// range: 0x75a704c-0x75a765b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75a7658 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_DateTimeParse__ParseISO8601(long param_1,long param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  undefined8 local_78;
  double local_70;
  undefined4 local_64;
  undefined8 local_60;
  double local_58;
  
  if ((DAT_09521c5b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835a8);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09184eb0);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918db18);
    FUN_03f5c2a4(&DAT_0920ec70);
    DAT_09521c5b = 1;
  }
  local_60 = 0;
  local_64 = 0;
  local_78 = 0;
  local_70 = 0.0;
  if ((-1 < *(int *)(param_1 + 0x10)) &&
     (iVar4 = System_DateTimeRawInfo__GetNumber(param_1,0,0), -1 < iVar4)) {
    System_DateTimeRawInfo__GetNumber(param_1,1,0);
  }
  lVar1 = DAT_0918db18;
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
  local_64 = 0;
  local_70 = 0.0;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System___DTString__SkipWhiteSpaces(param_2,0);
  if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar8 = System_DateTimeParse__ParseDigits(param_2,2,(long)&local_60 + 4);
  if ((uVar8 & 1) == 0) {
LAB_075a7478:
    System_DateTimeResult__SetBadDateTimeFailure(param_4,0);
  }
  else {
    if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System___DTString__SkipWhiteSpaces(param_2,0);
    uVar8 = System___DTString__Match(param_2,0x3a,0);
    if ((uVar8 & 1) == 0) goto LAB_075a7478;
    if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System___DTString__SkipWhiteSpaces(param_2,0);
    if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = System_DateTimeParse__ParseDigits(param_2,2,&local_60);
    if ((uVar8 & 1) == 0) goto LAB_075a7478;
    if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System___DTString__SkipWhiteSpaces(param_2,0);
    uVar8 = System___DTString__Match(param_2,0x3a,0);
    if ((uVar8 & 1) != 0) {
      if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System___DTString__SkipWhiteSpaces(param_2,0);
      if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar8 = System_DateTimeParse__ParseDigits(param_2,2,&local_64);
      if ((uVar8 & 1) == 0) goto LAB_075a7478;
      if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar8 = System___DTString__Match(param_2,0x2e,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar8 = System_DateTimeParse__ParseFraction(param_2,&local_70);
        if ((uVar8 & 1) == 0) goto LAB_075a7478;
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
      }
      if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System___DTString__SkipWhiteSpaces(param_2,0);
    }
    if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = System___DTString__GetNext(param_2,0);
    if ((uVar8 & 1) != 0) {
      if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System___DTString__GetChar(param_2,0);
      lVar9 = DAT_0918bd60;
      lVar1 = DAT_091835a8;
      if (uVar3 < 0x5a) {
        if ((uVar3 == 0x2b) || (uVar3 == 0x2d)) {
          *(uint *)(param_4 + 0x24) = *(uint *)(param_4 + 0x24) | 0x100;
          if (*(int *)(lVar1 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar8 = System_DateTimeParse__ParseTimeZone(param_2,param_4 + 0x28);
          if ((uVar8 & 1) == 0) goto LAB_075a7478;
        }
        else {
LAB_075a73a4:
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
        }
      }
      else {
        if ((uVar3 != 0x5a) && (uVar3 != 0x7a)) goto LAB_075a73a4;
        uVar7 = *(uint *)(param_4 + 0x24) | 0x100;
        *(uint *)(param_4 + 0x24) = uVar7;
        if (*(int *)(lVar9 + 0xe4) == 0) {
          FUN_03f5c424();
          uVar7 = *(uint *)(param_4 + 0x24);
          lVar9 = DAT_0918bd60;
        }
        uVar11 = **(undefined8 **)(lVar9 + 0xb8);
        *(uint *)(param_4 + 0x24) = uVar7 | 0x200;
        *(undefined8 *)(param_4 + 0x28) = uVar11;
      }
      if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System___DTString__SkipWhiteSpaces(param_2,0);
      uVar8 = System___DTString__Match(param_2,0x23,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar8 = System_DateTimeParse__VerifyValidPunctuation(param_2);
        if ((uVar8 & 1) == 0) goto LAB_075a7478;
        if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System___DTString__SkipWhiteSpaces(param_2,0);
      }
      if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar8 = System___DTString__Match(param_2,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar8 = System_DateTimeParse__VerifyValidPunctuation(param_2);
        if ((uVar8 & 1) == 0) goto LAB_075a7478;
      }
      if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar8 = System___DTString__GetNext(param_2,0);
      if ((uVar8 & 1) != 0) goto LAB_075a7478;
    }
    if (*(int *)(DAT_09184eb0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar10 = (long *)System_Globalization_GregorianCalendar__GetDefaultInstance(0);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    uVar5 = System_DateTimeRawInfo__GetNumber(param_1,0,0);
    uVar6 = System_DateTimeRawInfo__GetNumber(param_1,1,0);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar8 = (**(code **)(*plVar10 + 0x2e8))
                      (plVar10,uVar2,uVar5,uVar6,local_60._4_4_,local_60 & 0xffffffff,local_64,0,
                       *(undefined4 *)(param_4 + 0x20),&local_78,*(undefined8 *)(*plVar10 + 0x2f0));
    dVar13 = local_70;
    if ((uVar8 & 1) != 0) {
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar13 = dVar13 * 10000000.0;
      dVar12 = modf(dVar13,&local_58);
      if (0.0 <= dVar13) {
        if (dVar12 == 0.5) {
          dVar13 = 1.0;
          goto LAB_075a75c4;
        }
        dVar12 = (double)(long)(dVar13 + 0.5);
      }
      else if (dVar12 == -0.5) {
        dVar13 = -1.0;
LAB_075a75c4:
        dVar12 = local_58;
        if (((long)local_58 & 1U) != 0) {
          dVar12 = local_58 + dVar13;
        }
      }
      else {
        dVar12 = (double)(long)(dVar13 + -0.5);
      }
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar1 = -0x8000000000000000;
      if (dVar12 != INFINITY) {
        lVar1 = (long)dVar12;
      }
      local_78 = System_DateTime__AddTicks(&local_78,lVar1);
      lVar1 = DAT_091835a8;
      *(undefined8 *)(param_4 + 0x38) = local_78;
      if (*(int *)(lVar1 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = System_DateTimeParse__DetermineTimeZoneAdjustments(param_2,param_4,param_3,0);
      goto LAB_075a7488;
    }
    System_DateTimeResult__SetFailure(param_4,7,DAT_0920ec70,0);
  }
  uVar7 = 0;
LAB_075a7488:
  return uVar7 & 1;
}

