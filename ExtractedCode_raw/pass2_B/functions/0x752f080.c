// rea decompile_all
// name: System.Globalization.CalendarData$$.ctor
// address: 0x752f080
// body: available
// range: 0x752f080-0x752f67f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x752f678 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x752f67c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_CalendarData___ctor
               (long param_1,undefined8 param_2,uint param_3,byte param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  
  if ((DAT_0952184f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091822a0);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09184c68);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09226f90);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_0952184f = 1;
  }
  *(undefined4 *)(param_1 + 0x90) = 0x7ed;
  System_Object___ctor(param_1,0);
  lVar3 = DAT_091822a0;
  *(byte *)(param_1 + 0x98) = param_4 & 1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Globalization_CalendarData__nativeGetCalendarData(param_1,param_2,param_3);
  if ((uVar1 & 1) == 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      *(long *)(param_1 + 0x10) = **(long **)(DAT_09535468 + 0xb8);
      thunk_FUN_03f5d7b8();
    }
    plVar4 = (long *)(param_1 + 0x18);
    if (*plVar4 == 0) {
      if (*(int *)(DAT_091822a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_091822a0 + 0xb8) == 0) goto LAB_0752f678;
      *plVar4 = *(long *)(**(long **)(DAT_091822a0 + 0xb8) + 0x18);
      thunk_FUN_03f5d7b8(plVar4);
    }
    plVar4 = (long *)(param_1 + 0x20);
    if (*plVar4 == 0) {
      if (*(int *)(DAT_091822a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_091822a0 + 0xb8) == 0) goto LAB_0752f678;
      *plVar4 = *(long *)(**(long **)(DAT_091822a0 + 0xb8) + 0x20);
      thunk_FUN_03f5d7b8(plVar4);
    }
    plVar4 = (long *)(param_1 + 0x28);
    if (*plVar4 == 0) {
      if (*(int *)(DAT_091822a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_091822a0 + 0xb8) == 0) goto LAB_0752f678;
      *plVar4 = *(long *)(**(long **)(DAT_091822a0 + 0xb8) + 0x28);
      thunk_FUN_03f5d7b8(plVar4);
    }
    plVar4 = (long *)(param_1 + 0x30);
    if (*plVar4 == 0) {
      if (*(int *)(DAT_091822a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_091822a0 + 0xb8) == 0) goto LAB_0752f678;
      *plVar4 = *(long *)(**(long **)(DAT_091822a0 + 0xb8) + 0x30);
      thunk_FUN_03f5d7b8(plVar4);
    }
    plVar4 = (long *)(param_1 + 0x38);
    if (*plVar4 == 0) {
      if (*(int *)(DAT_091822a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_091822a0 + 0xb8) == 0) goto LAB_0752f678;
      *plVar4 = *(long *)(**(long **)(DAT_091822a0 + 0xb8) + 0x38);
      thunk_FUN_03f5d7b8(plVar4);
    }
    plVar4 = (long *)(param_1 + 0x40);
    if (*plVar4 == 0) {
      if (*(int *)(DAT_091822a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_091822a0 + 0xb8) == 0) goto LAB_0752f678;
      *plVar4 = *(long *)(**(long **)(DAT_091822a0 + 0xb8) + 0x40);
      thunk_FUN_03f5d7b8(plVar4);
    }
    plVar4 = (long *)(param_1 + 0x48);
    if (*plVar4 == 0) {
      if (*(int *)(DAT_091822a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_091822a0 + 0xb8) == 0) goto LAB_0752f678;
      *plVar4 = *(long *)(**(long **)(DAT_091822a0 + 0xb8) + 0x48);
      thunk_FUN_03f5d7b8(plVar4);
    }
    plVar4 = (long *)(param_1 + 0x50);
    if (*plVar4 == 0) {
      if (*(int *)(DAT_091822a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_091822a0 + 0xb8) == 0) goto LAB_0752f678;
      *plVar4 = *(long *)(**(long **)(DAT_091822a0 + 0xb8) + 0x50);
      thunk_FUN_03f5d7b8(plVar4);
    }
    plVar4 = (long *)(param_1 + 0x58);
    if (*plVar4 == 0) {
      if (*(int *)(DAT_091822a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_091822a0 + 0xb8) == 0) goto LAB_0752f678;
      *plVar4 = *(long *)(**(long **)(DAT_091822a0 + 0xb8) + 0x58);
      thunk_FUN_03f5d7b8(plVar4);
    }
    plVar4 = (long *)(param_1 + 0x60);
    if (*plVar4 == 0) {
      if (*(int *)(DAT_091822a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_091822a0 + 0xb8) == 0) goto LAB_0752f678;
      *plVar4 = *(long *)(**(long **)(DAT_091822a0 + 0xb8) + 0x60);
      thunk_FUN_03f5d7b8(plVar4);
    }
    plVar4 = (long *)(param_1 + 0x68);
    if (*plVar4 == 0) {
      if (*(int *)(DAT_091822a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_091822a0 + 0xb8) == 0) goto LAB_0752f678;
      *plVar4 = *(long *)(**(long **)(DAT_091822a0 + 0xb8) + 0x68);
      thunk_FUN_03f5d7b8(plVar4);
    }
    plVar4 = (long *)(param_1 + 0x70);
    if (*plVar4 == 0) {
      if (*(int *)(DAT_091822a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_091822a0 + 0xb8) == 0) goto LAB_0752f678;
      *plVar4 = *(long *)(**(long **)(DAT_091822a0 + 0xb8) + 0x70);
      thunk_FUN_03f5d7b8(plVar4);
    }
  }
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x18));
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x28));
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x20));
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x30));
  if ((param_3 & 0xffff) == 4) {
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(char *)(*(long *)(DAT_09182ff8 + 0xb8) + 0x40) == '\0') {
      puVar2 = *(undefined8 **)(DAT_09535468 + 0xb8);
    }
    else {
      puVar2 = &DAT_09226f90;
    }
    *(undefined8 *)(param_1 + 0x10) = *puVar2;
    thunk_FUN_03f5d7b8();
  }
  lVar3 = *(long *)(param_1 + 0x78);
  if (lVar3 == 0) {
LAB_0752f4ec:
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x68);
    thunk_FUN_03f5d7b8((long *)(param_1 + 0x78));
  }
  else {
    if (*(int *)(lVar3 + 0x18) == 0) goto LAB_0752f67c;
    uVar1 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar3 + 0x20),0);
    if ((uVar1 & 1) != 0) goto LAB_0752f4ec;
  }
  lVar3 = *(long *)(param_1 + 0x80);
  if (lVar3 == 0) {
LAB_0752f520:
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x70);
    thunk_FUN_03f5d7b8((long *)(param_1 + 0x80));
  }
  else {
    if (*(int *)(lVar3 + 0x18) == 0) goto LAB_0752f67c;
    uVar1 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar3 + 0x20),0);
    if ((uVar1 & 1) != 0) goto LAB_0752f520;
  }
  lVar3 = *(long *)(param_1 + 0x88);
  if (lVar3 == 0) {
LAB_0752f554:
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x68);
    thunk_FUN_03f5d7b8((long *)(param_1 + 0x88));
  }
  else {
    if (*(int *)(lVar3 + 0x18) == 0) goto LAB_0752f67c;
    uVar1 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar3 + 0x20),0);
    if ((uVar1 & 1) != 0) goto LAB_0752f554;
  }
  System_Globalization_CalendarData__InitializeEraNames(param_1,param_2,param_3);
  System_Globalization_CalendarData__InitializeAbbreviatedEraNames(param_1,param_2,param_3);
  if (*(int *)(DAT_09184c68 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_095216cd == '\0') {
    FUN_03f5c2a4(&DAT_09184c68);
    DAT_095216cd = '\x01';
  }
  if (*(int *)(DAT_09184c68 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((param_3 == 3) && (**(char **)(DAT_09184c68 + 0xb8) == '\0')) {
    if (*(int *)(DAT_091822a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = System_Globalization_CalendarData__GetJapaneseEnglishEraNames();
    *(long *)(param_1 + 0x48) = lVar3;
  }
  else {
    lVar3 = FUN_03f5c394(DAT_091805f8,1);
    if (lVar3 == 0) goto LAB_0752f678;
    if (*(int *)(lVar3 + 0x18) == 0) {
LAB_0752f67c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined8 *)(lVar3 + 0x20) = DAT_091f5700;
    thunk_FUN_03f5d7b8();
    *(long *)(param_1 + 0x48) = lVar3;
  }
  thunk_FUN_03f5d7b8(param_1 + 0x48,lVar3);
  if (*(long *)(param_1 + 0x38) != 0) {
    *(int *)(param_1 + 0x94) = (int)*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18);
    return;
  }
LAB_0752f678:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

