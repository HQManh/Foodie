// rea decompile_all
// name: System.DateTimeParse$$CheckDefaultDateTime
// address: 0x75a765c
// body: available
// range: 0x75a765c-0x75a78e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75a78e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_DateTimeParse__CheckDefaultDateTime(int *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  uint local_24;
  
  local_24 = param_3;
  if ((DAT_09521c6b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835a8);
    FUN_03f5c2a4(&DAT_09184eb0);
    FUN_03f5c2a4(&DAT_092104f0);
    DAT_09521c6b = 1;
  }
  uVar1 = param_1[9];
  if (((uVar1 >> 0xb & 1) == 0) || ((iVar3 = param_1[1], iVar3 == -1 && (param_1[2] == -1)))) {
LAB_075a76b8:
    if (*param_1 != -1) {
      iVar3 = param_1[1];
      goto LAB_075a76f4;
    }
  }
  else {
    if (((uVar1 >> 0xc & 1) != 0) || (*param_1 == -1)) {
      if ((uVar1 >> 8 & 1) != 0) {
        System_DateTimeResult__SetFailure(param_1,4,DAT_092104f0,0);
        return 0;
      }
      goto LAB_075a76b8;
    }
LAB_075a76f4:
    if ((iVar3 != -1) && (param_1[2] != -1)) goto LAB_075a788c;
  }
  if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_DateTimeParse__GetDateTimeNow(param_1,&local_24);
  iVar3 = param_1[1];
  if ((iVar3 == -1) && (param_1[2] == -1)) {
    if (*param_1 == -1) {
      if ((param_3 >> 3 & 1) == 0) {
        plVar5 = (long *)*param_2;
        if (plVar5 != (long *)0x0) {
          iVar3 = (**(code **)(*plVar5 + 0x298))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x2a0));
          plVar5 = (long *)*param_2;
          *param_1 = iVar3;
          if (plVar5 != (long *)0x0) {
            iVar3 = (**(code **)(*plVar5 + 600))(plVar5,uVar4,*(undefined8 *)(*plVar5 + 0x260));
            param_2 = (long *)*param_2;
            param_1[1] = iVar3;
            if (param_2 != (long *)0x0) {
              iVar3 = (**(code **)(*param_2 + 0x1e8))
                                (param_2,uVar4,*(undefined8 *)(*param_2 + 0x1f0));
              param_1[2] = iVar3;
              goto LAB_075a788c;
            }
          }
        }
LAB_075a78e0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(DAT_09184eb0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = System_Globalization_GregorianCalendar__GetDefaultInstance(0);
      *param_2 = lVar6;
      thunk_FUN_03f5d7b8(param_2,lVar6);
      param_1[2] = 1;
      param_1[0] = 1;
      param_1[1] = 1;
    }
    else {
      param_1[1] = 1;
      param_1[2] = 1;
    }
  }
  else {
    if (*param_1 == -1) {
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) goto LAB_075a78e0;
      iVar2 = (**(code **)(*param_2 + 0x298))(param_2,uVar4,*(undefined8 *)(*param_2 + 0x2a0));
      iVar3 = param_1[1];
      *param_1 = iVar2;
    }
    if (iVar3 == -1) {
      param_1[1] = 1;
    }
    if (param_1[2] == -1) {
      param_1[2] = 1;
    }
  }
LAB_075a788c:
  if (param_1[3] == -1) {
    param_1[3] = 0;
  }
  if (param_1[4] == -1) {
    param_1[4] = 0;
  }
  if (param_1[5] == -1) {
    param_1[5] = 0;
  }
  if (param_1[8] == -1) {
    param_1[8] = 0;
  }
  return 1;
}

