// rea decompile_all
// name: System.Text.Latin1Encoding$$GetBytes
// address: 0x743bf70
// body: available
// range: 0x743bf70-0x743c307 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x743c304 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Text_Latin1Encoding__GetBytes
              (long param_1,ushort *param_2,int param_3,undefined1 *param_4,int param_5,long param_6
              )

{
  ushort uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  short sVar7;
  long *plVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined1 *puVar11;
  ushort *local_68;
  
  if ((DAT_09521061 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183fa8);
    DAT_09521061 = 1;
  }
  local_68 = (ushort *)0x0;
  puVar11 = param_4;
  if (param_6 == 0) {
    plVar8 = *(long **)(param_1 + 0x28);
    if (plVar8 != (long *)0x0) {
      sVar7 = 0;
      goto LAB_0743bff0;
    }
    sVar7 = 0;
LAB_0743c070:
    puVar10 = param_2 + param_3;
LAB_0743c074:
    if (sVar7 == 0) {
      plVar8 = (long *)0x0;
      puVar9 = param_2;
    }
    else {
      if ((param_6 == 0) ||
         (plVar8 = (long *)System_Text_Encoder__get_FallbackBuffer(param_6), plVar8 == (long *)0x0))
      {
LAB_0743c304:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar8[2] = (long)param_2;
      plVar8[3] = (long)puVar10;
      plVar8[4] = param_6;
      thunk_FUN_03f5d7b8(plVar8 + 4,param_6);
      *(undefined2 *)(plVar8 + 5) = 1;
      *(undefined1 *)((long)plVar8 + 0x2a) = 0;
      pcVar2 = *(code **)(*plVar8 + 0x1d8);
      uVar3 = *(undefined8 *)(*plVar8 + 0x1e0);
      *(undefined4 *)((long)plVar8 + 0x2c) = 0;
      local_68 = param_2;
      (*pcVar2)(plVar8,sVar7,&local_68,uVar3);
      puVar9 = local_68;
      iVar5 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
      if (param_5 < iVar5) {
        System_Text_Encoding__ThrowBytesOverflow(param_1,param_6,1,0);
      }
    }
LAB_0743c10c:
    do {
      if (plVar8 == (long *)0x0) {
        uVar4 = 0;
LAB_0743c148:
        if (puVar10 <= puVar9) goto LAB_0743c250;
      }
      else {
        uVar4 = (**(code **)(*plVar8 + 0x198))(plVar8,*(undefined8 *)(*plVar8 + 0x1a0));
        *(bool *)((long)plVar8 + 0x2a) = uVar4 != 0;
        if (uVar4 == 0) {
          *(undefined4 *)((long)plVar8 + 0x2c) = 0;
          goto LAB_0743c148;
        }
      }
      if (uVar4 == 0) {
        uVar4 = *puVar9;
        puVar9 = puVar9 + 1;
      }
      if (uVar4 < 0x100) {
        if (param_4 + param_5 <= puVar11) {
          if ((plVar8 == (long *)0x0) || (*(char *)((long)plVar8 + 0x2a) == '\0')) {
            puVar9 = puVar9 + -1;
          }
          goto LAB_0743c238;
        }
        *puVar11 = (char)uVar4;
        puVar11 = puVar11 + 1;
        goto LAB_0743c10c;
      }
      if (plVar8 == (long *)0x0) {
        if (param_6 == 0) {
          plVar8 = *(long **)(param_1 + 0x28);
          if (plVar8 == (long *)0x0) goto LAB_0743c304;
          plVar8 = (long *)(**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
        }
        else {
          plVar8 = (long *)System_Text_Encoder__get_FallbackBuffer(param_6);
        }
        if (plVar8 == (long *)0x0) goto LAB_0743c304;
        plVar8[4] = param_6;
        plVar8[2] = (long)param_2;
        plVar8[3] = (long)puVar10;
        thunk_FUN_03f5d7b8(plVar8 + 4,param_6);
        *(undefined1 *)((long)plVar8 + 0x2a) = 0;
        *(undefined2 *)(plVar8 + 5) = 1;
        *(undefined4 *)((long)plVar8 + 0x2c) = 0;
      }
      local_68 = puVar9;
      (**(code **)(*plVar8 + 0x1d8))(plVar8,uVar4,&local_68,*(undefined8 *)(*plVar8 + 0x1e0));
      puVar9 = local_68;
      iVar5 = (**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
    } while ((long)iVar5 <= (long)(param_4 + param_5) - (long)puVar11);
    plVar8[2] = 0;
    *(undefined1 *)((long)plVar8 + 0x2a) = 0;
    puVar9 = puVar9 + -1;
    pcVar2 = *(code **)(*plVar8 + 0x1c8);
    uVar3 = *(undefined8 *)(*plVar8 + 0x1d0);
    *(undefined4 *)((long)plVar8 + 0x2c) = 0;
    (*pcVar2)(plVar8,uVar3);
LAB_0743c238:
    System_Text_Encoding__ThrowBytesOverflow(param_1,param_6,puVar9 == param_2,0);
LAB_0743c250:
    if (param_6 == 0) goto LAB_0743c278;
    if ((plVar8 != (long *)0x0) && (*(char *)((long)plVar8 + 0x29) == '\0')) {
      *(undefined2 *)(param_6 + 0x20) = 0;
    }
    uVar6 = (long)puVar9 - (long)param_2;
  }
  else {
    plVar8 = *(long **)(param_6 + 0x10);
    sVar7 = *(short *)(param_6 + 0x20);
    if (plVar8 == (long *)0x0) goto LAB_0743c070;
LAB_0743bff0:
    if (*plVar8 != DAT_09183fa8) goto LAB_0743c070;
    puVar10 = param_2 + param_3;
    iVar5 = (**(code **)(DAT_09183fa8 + 0x188))(plVar8,*(undefined8 *)(DAT_09183fa8 + 400));
    if (iVar5 != 1) goto LAB_0743c074;
    if (plVar8[2] == 0) goto LAB_0743c304;
    uVar4 = System_String__get_Chars(plVar8[2],0,0);
    if (0xff < uVar4) goto LAB_0743c074;
    if (sVar7 != 0) {
      if (param_5 == 0) {
        System_Text_Encoding__ThrowBytesOverflow(param_1,param_6,1,0);
      }
      param_5 = param_5 + -1;
      *param_4 = (char)uVar4;
      puVar11 = param_4 + 1;
    }
    puVar9 = param_2;
    if (param_5 < param_3) {
      System_Text_Encoding__ThrowBytesOverflow(param_1,param_6,param_5 < 1,0);
      puVar10 = param_2 + param_5;
    }
    while (puVar9 < puVar10) {
      uVar1 = *puVar9;
      if (0xff < *puVar9) {
        uVar1 = uVar4;
      }
      *puVar11 = (char)uVar1;
      puVar11 = puVar11 + 1;
      puVar9 = puVar9 + 1;
    }
    if (param_6 == 0) goto LAB_0743c278;
    uVar6 = (long)puVar9 - (long)param_2;
    *(undefined2 *)(param_6 + 0x20) = 0;
  }
  if ((long)uVar6 < 0) {
    uVar6 = uVar6 + 1;
  }
  *(int *)(param_6 + 0x34) = (int)(uVar6 >> 1);
LAB_0743c278:
  return (int)puVar11 - (int)param_4;
}

