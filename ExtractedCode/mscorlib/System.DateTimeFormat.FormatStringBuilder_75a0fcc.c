// rea decompile_all
// name: System.DateTimeFormat$$FormatStringBuilder
// address: 0x75a0fcc
// body: available
// range: 0x75a0fcc-0x75a12ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75a12fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_DateTimeFormat__FormatStringBuilder
               (undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  local_50 = param_4;
  uStack_48 = param_5;
  local_38 = param_1;
  if ((DAT_09521c29 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183570);
    FUN_03f5c2a4(&DAT_09183568);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_09225d60);
    FUN_03f5c2a4(&DAT_09202fc8);
    FUN_03f5c2a4(&DAT_09221e00);
    DAT_09521c29 = 1;
  }
  if ((int)param_3 == 0) {
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = System_DateTime__get_Ticks(&local_38);
    if (uVar7 < 864000000000) {
      if ((param_4 == 0) || (plVar4 = *(long **)(param_4 + 0x78), plVar4 == (long *)0x0))
      goto LAB_075a12fc;
      uVar3 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
      if ((uVar3 & 0xffff) < 9) {
        uVar1 = 1 << (ulong)(uVar3 & 0x1f);
        if ((uVar1 & 0x158) == 0) {
          if ((uVar1 & 0xa0) != 0) goto LAB_075a1124;
          goto LAB_075a12e4;
        }
      }
      else {
LAB_075a12e4:
        if (((uVar3 & 0xffff) != 0xd) && ((uVar3 & 0xfffe) != 0x16)) goto LAB_075a1124;
      }
      if (*(int *)(DAT_09183570 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      param_4 = System_Globalization_DateTimeFormatInfo__get_InvariantInfo(0);
      bVar2 = true;
      local_50 = param_4;
    }
    else {
LAB_075a1124:
      bVar2 = false;
    }
    if (*(int *)(DAT_09183568 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = **(undefined8 **)(DAT_09183568 + 0xb8);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bd60);
    }
    uVar7 = System_TimeSpan__op_Equality(param_5,uVar6,0);
    if ((uVar7 & 1) == 0) {
      lVar5 = DAT_09225d60;
      if (!bVar2) {
        if (param_4 == 0) {
LAB_075a12fc:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = System_Globalization_DateTimeFormatInfo__get_DateTimeOffsetPattern(param_4,0);
      }
    }
    else {
      plVar4 = &DAT_09221e00;
      if (!bVar2) {
        plVar4 = &DAT_09202fc8;
      }
      lVar5 = *plVar4;
    }
    if (DAT_09519f66 == '\0') {
      FUN_03f5c2a4(&DAT_091b97b8);
      DAT_09519f66 = '\x01';
    }
    if (lVar5 != 0) {
      param_2 = System_String__GetRawStringData(lVar5,0);
      param_3 = (ulong)*(uint *)(lVar5 + 0x10);
      uVar7 = 0;
      goto LAB_075a1208;
    }
  }
  else {
    uVar7 = param_3 >> 0x20;
LAB_075a1208:
    if ((int)param_3 != 1) goto LAB_075a1294;
    if (*(int *)(DAT_09183568 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = System_DateTimeFormat__ExpandPredefinedFormat
                      (param_2,uVar7 << 0x20 | 1,&local_38,&local_50,&uStack_48);
    if (DAT_09519f66 == '\0') {
      FUN_03f5c2a4(&DAT_091b97b8);
      DAT_09519f66 = '\x01';
    }
    if (lVar5 != 0) {
      param_2 = System_String__GetRawStringData(lVar5,0);
      param_3 = (ulong)*(uint *)(lVar5 + 0x10);
      uVar7 = 0;
      goto LAB_075a1294;
    }
  }
  uVar7 = 0;
  param_3 = 0;
  param_2 = 0;
LAB_075a1294:
  uVar6 = local_38;
  lVar5 = local_50;
  if (*(int *)(DAT_09183568 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_DateTimeFormat__FormatCustomized
            (uVar6,param_2,param_3 & 0xffffffff | uVar7 << 0x20,lVar5,param_5,0);
  return;
}

