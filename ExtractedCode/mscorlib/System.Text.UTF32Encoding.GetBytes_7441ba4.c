// rea decompile_all
// name: System.Text.UTF32Encoding$$GetBytes
// address: 0x7441ba4
// body: available
// range: 0x7441ba4-0x7441f67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7441c9c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7441f64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Text_UTF32Encoding__GetBytes
              (long *param_1,ushort *param_2,int param_3,undefined2 *param_4,int param_5,
              long param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 uVar9;
  long lVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined2 *puVar13;
  ushort *puVar14;
  ushort *local_68;
  
  local_68 = (ushort *)0x0;
  if (param_6 == 0) {
    plVar5 = (long *)param_1[5];
    if (plVar5 == (long *)0x0) goto LAB_07441f64;
    plVar5 = (long *)(**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
    uVar12 = 0;
  }
  else {
    uVar12 = (uint)*(ushort *)(param_6 + 0x20);
    plVar5 = (long *)System_Text_Encoder__get_FallbackBuffer(param_6);
    if (*(char *)(param_6 + 0x31) != '\0') {
      if (plVar5 == (long *)0x0) goto LAB_07441f64;
      iVar3 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
      if (0 < iVar3) {
        uVar6 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
        FUN_039b1d98(param_6);
        uVar11 = *(undefined8 *)(param_6 + 0x10);
        FUN_039b1d98(uVar11);
        uVar11 = System_Object__GetType(uVar11,0);
        uVar7 = thunk_FUN_03fc39d4(&DAT_09208350);
        uVar6 = SR__Format(uVar7,uVar6,uVar11,0);
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar11 = thunk_FUN_03f9944c();
        System_ArgumentException___ctor(uVar11,uVar6,0);
        uVar6 = thunk_FUN_03fc39d4(&DAT_091dd870);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar11,uVar6);
      }
      goto LAB_07441cc0;
    }
  }
  if (plVar5 == (long *)0x0) {
LAB_07441f64:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_07441cc0:
  plVar5[4] = param_6;
  plVar5[2] = (long)param_2;
  plVar5[3] = (long)(param_2 + param_3);
  thunk_FUN_03f5d7b8(plVar5 + 4,param_6);
  *(undefined1 *)((long)plVar5 + 0x2a) = 0;
  *(undefined2 *)(plVar5 + 5) = 1;
  *(undefined4 *)((long)plVar5 + 0x2c) = 0;
  puVar13 = param_4;
  puVar14 = param_2;
LAB_07441d10:
  do {
    uVar4 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
    *(bool *)((long)plVar5 + 0x2a) = (uVar4 & 0xffff) != 0;
    if ((uVar4 & 0xffff) == 0) {
      *(undefined4 *)((long)plVar5 + 0x2c) = 0;
      if (puVar14 < param_2 + param_3) {
        uVar4 = (uint)*puVar14;
        puVar14 = puVar14 + 1;
        goto LAB_07441d48;
      }
      local_68 = puVar14;
      if (param_6 == 0) {
        if ((uVar12 & 0xffff) == 0) goto LAB_07441f34;
      }
      else if ((*(char *)(param_6 + 0x30) == '\0') || ((uVar12 & 0xffff) == 0)) goto LAB_07441f18;
LAB_07441e80:
      lVar10 = *plVar5;
      uVar4 = uVar12;
      goto LAB_07441e90;
    }
LAB_07441d48:
    uVar1 = (undefined1)uVar4;
    if ((uVar12 & 0xffff) == 0) break;
    if (*(int *)(DAT_09535460 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = System_Char__IsLowSurrogate(uVar4,0);
    if ((uVar8 & 1) == 0) {
      local_68 = puVar14 + -1;
      goto LAB_07441e80;
    }
    if ((undefined1 *)((long)param_4 + (long)param_5) <= (undefined1 *)((long)puVar13 + 3)) {
      if (*(char *)((long)plVar5 + 0x2a) != '\0') {
        (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
        goto LAB_07441ee4;
      }
      puVar14 = puVar14 + -2;
      goto LAB_07441ef4;
    }
    iVar3 = (uVar12 & 0xffff) * 0x400 + (uVar4 & 0xffff) + -0x35fdc00;
    uVar9 = (undefined1)((uint)iVar3 >> 8);
    uVar2 = (undefined1)((uint)iVar3 >> 0x10);
    if (*(char *)((long)param_1 + 0x3a) != '\0') {
      *(undefined1 *)puVar13 = 0;
      *(undefined1 *)((long)puVar13 + 1) = uVar2;
      goto LAB_07441e60;
    }
    *(undefined1 *)((long)puVar13 + 1) = uVar9;
    *(undefined1 *)puVar13 = uVar1;
    *(undefined1 *)(puVar13 + 1) = uVar2;
    *(undefined1 *)((long)puVar13 + 3) = 0;
    puVar13 = puVar13 + 2;
    uVar12 = 0;
  } while( true );
  if (*(int *)(DAT_09535460 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar8 = System_Char__IsHighSurrogate(uVar4,0);
  uVar12 = uVar4;
  if ((uVar8 & 1) == 0) {
    if (*(int *)(DAT_09535460 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = System_Char__IsLowSurrogate(uVar4,0);
    if ((uVar8 & 1) == 0) {
      if ((undefined1 *)((long)param_4 + (long)param_5) <= (undefined1 *)((long)puVar13 + 3)) {
        if (*(char *)((long)plVar5 + 0x2a) == '\0') {
          puVar14 = puVar14 + -1;
        }
        else {
LAB_07441ee4:
          (**(code **)(*plVar5 + 0x1a8))(plVar5,*(undefined8 *)(*plVar5 + 0x1b0));
        }
LAB_07441ef4:
        System_Text_Encoding__ThrowBytesOverflow(param_1,param_6,puVar13 == param_4,0);
        if (param_6 != 0) {
          uVar12 = 0;
LAB_07441f18:
          *(short *)(param_6 + 0x20) = (short)uVar12;
          uVar8 = (long)puVar14 - (long)param_2;
          if ((long)uVar8 < 0) {
            uVar8 = uVar8 + 1;
          }
          *(int *)(param_6 + 0x34) = (int)(uVar8 >> 1);
        }
LAB_07441f34:
        return (int)puVar13 - (int)param_4;
      }
      uVar9 = (undefined1)(uVar4 >> 8);
      uVar12 = 0;
      if (*(char *)((long)param_1 + 0x3a) == '\0') {
        *(undefined1 *)puVar13 = uVar1;
        *(undefined1 *)((long)puVar13 + 1) = uVar9;
        puVar13[1] = 0;
        puVar13 = puVar13 + 2;
      }
      else {
        *puVar13 = 0;
LAB_07441e60:
        *(undefined1 *)(puVar13 + 1) = uVar9;
        *(undefined1 *)((long)puVar13 + 3) = uVar1;
        puVar13 = puVar13 + 2;
        uVar12 = 0;
      }
    }
    else {
      lVar10 = *plVar5;
      local_68 = puVar14;
LAB_07441e90:
      (**(code **)(lVar10 + 0x1d8))(plVar5,uVar4,&local_68,*(undefined8 *)(lVar10 + 0x1e0));
      puVar14 = local_68;
      uVar12 = 0;
    }
  }
  goto LAB_07441d10;
}

