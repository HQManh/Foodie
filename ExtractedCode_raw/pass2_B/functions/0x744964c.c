// rea decompile_all
// name: System.Text.UnicodeEncoding$$GetByteCount
// address: 0x744964c
// body: available
// range: 0x744964c-0x7449b67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7449a08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7449a8c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7449ae8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Text_UnicodeEncoding__GetByteCount(long *param_1,ulong *param_2,int param_3,long param_4)

{
  ulong *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined2 local_6c [2];
  ulong *local_68;
  
  if ((DAT_095210ad & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c640);
    DAT_095210ad = 1;
  }
  iVar13 = param_3 * 2;
  local_68 = (ulong *)0x0;
  if (iVar13 < 0) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar7 = thunk_FUN_03f9944c();
    uVar8 = thunk_FUN_03fc39d4(&DAT_09219b28);
    uVar9 = thunk_FUN_03fc39d4(&DAT_09210b08);
    System_ArgumentOutOfRangeException___ctor(uVar7,uVar8,uVar9,0);
    uVar8 = thunk_FUN_03fc39d4(&DAT_091ddbd0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,uVar8);
  }
  puVar1 = (ulong *)((long)param_2 + (long)param_3 * 2);
  if (param_4 == 0) {
    plVar6 = (long *)0x0;
    uVar14 = 0;
  }
  else {
    uVar14 = (uint)*(ushort *)(param_4 + 0x20);
    if (*(ushort *)(param_4 + 0x20) != 0) {
      iVar13 = iVar13 + 2;
    }
    uVar5 = System_Text_Encoder__get_InternalHasFallbackBuffer(param_4,0);
    if ((uVar5 & 1) == 0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = (long *)System_Text_Encoder__get_FallbackBuffer(param_4,0);
      if (plVar6 == (long *)0x0) {
LAB_07449a08:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar3 = (**(code **)(*plVar6 + 0x1b8))(plVar6,*(undefined8 *)(*plVar6 + 0x1c0));
      if (0 < iVar3) {
        uVar7 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
        FUN_039b1d98(param_4);
        uVar8 = *(undefined8 *)(param_4 + 0x10);
        FUN_039b1d98(uVar8);
        uVar8 = System_Object__GetType(uVar8,0);
        uVar9 = thunk_FUN_03fc39d4(&DAT_09208350);
        uVar8 = SR__Format(uVar9,uVar7,uVar8,0);
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar7 = thunk_FUN_03f9944c();
        System_ArgumentException___ctor(uVar7,uVar8,0);
        goto LAB_07449a78;
      }
      System_Text_EncoderFallbackBuffer__InternalInitialize(plVar6,param_2,puVar1,param_4,0,0);
    }
  }
  bVar2 = false;
  puVar12 = param_2;
LAB_07449748:
  uVar15 = uVar14;
  if (plVar6 == (long *)0x0) {
    uVar4 = 0;
LAB_07449770:
    if (puVar1 <= puVar12) {
      if (uVar15 == 0) {
        return iVar13;
      }
      iVar13 = iVar13 + -2;
      if ((param_4 != 0) && (*(char *)(param_4 + 0x30) == '\0')) {
        return iVar13;
      }
      if (!bVar2) {
        if (plVar6 == (long *)0x0) {
          if (param_4 == 0) {
            plVar6 = (long *)param_1[5];
            if (plVar6 == (long *)0x0) goto LAB_07449a08;
            plVar6 = (long *)(**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180))
            ;
          }
          else {
            plVar6 = (long *)System_Text_Encoder__get_FallbackBuffer(param_4,0);
          }
          if (plVar6 == (long *)0x0) goto LAB_07449a08;
          System_Text_EncoderFallbackBuffer__InternalInitialize(plVar6,param_2,puVar1,param_4,0,0);
        }
        local_68 = puVar12;
        (**(code **)(*plVar6 + 0x1d8))(plVar6,uVar15,&local_68,*(undefined8 *)(*plVar6 + 0x1e0));
        bVar2 = true;
        puVar12 = local_68;
        uVar14 = 0;
        goto LAB_07449748;
      }
      local_6c[0] = (undefined2)uVar15;
      uVar7 = FUN_03f5c42c(DAT_09535460,local_6c);
      uVar8 = thunk_FUN_03fc39d4(&DAT_0920b760);
      uVar8 = SR__Format(uVar8,uVar7,0);
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar7 = thunk_FUN_03f9944c();
      uVar9 = thunk_FUN_03fc39d4(&DAT_09218b60);
      System_ArgumentException___ctor(uVar7,uVar8,uVar9,0);
LAB_07449a78:
      uVar8 = thunk_FUN_03fc39d4(&DAT_091ddbd0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar7,uVar8);
    }
  }
  else {
    uVar4 = System_Text_EncoderFallbackBuffer__InternalGetNextChar(plVar6,0);
    uVar4 = uVar4 & 0xffff;
    if (uVar4 == 0) goto LAB_07449770;
  }
  if (uVar4 == 0) {
    if (((*(char *)((long)param_1 + 0x39) == '\0') && (uVar15 == 0)) && (((ulong)puVar12 & 7) == 0))
    {
      for (; puVar12 < (ulong *)((long)puVar1 - 6U); puVar12 = puVar12 + 1) {
        uVar5 = *puVar12;
        if (((uVar5 & 0x8000800080008000) != 0) &&
           (((uVar10 = uVar5 & 0xf800f800f800f800 ^ 0xd800d800d800d800, (uVar10 & 0xf800) == 0 ||
             ((uVar10 & 0xf8000000) == 0)) ||
            ((uVar10 >> 0x3b == 0 || ((uVar10 & 0xf80000000000) == 0)))))) {
          if (*(int *)(DAT_0918c640 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if ((uVar5 & 0xfc00fc00fc00fc00) != *(ulong *)(*(long *)(DAT_0918c640 + 0xb8) + 0x20))
          break;
        }
      }
      if (puVar1 <= puVar12) {
        return iVar13;
      }
    }
    uVar4 = (uint)(ushort)*puVar12;
    puVar12 = (ulong *)((long)puVar12 + 2);
  }
  else {
    iVar13 = iVar13 + 2;
  }
  if ((uVar4 + 0x2000 >> 0xb & 0x1f) < 0x1f) {
    uVar4 = 0;
joined_r0x0744986c:
    uVar14 = uVar4;
    if (uVar15 != 0) {
      if (plVar6 == (long *)0x0) {
        if (param_4 == 0) {
          plVar6 = (long *)param_1[5];
          if (plVar6 == (long *)0x0) goto LAB_07449a08;
          plVar6 = (long *)(**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
        }
        else {
          plVar6 = (long *)System_Text_Encoder__get_FallbackBuffer(param_4,0);
        }
        if (plVar6 == (long *)0x0) goto LAB_07449a08;
        System_Text_EncoderFallbackBuffer__InternalInitialize(plVar6,param_2,puVar1,param_4,0,0);
      }
      lVar11 = *plVar6;
      uVar4 = uVar15;
      local_68 = (ulong *)((long)puVar12 + -2);
      goto LAB_074499cc;
    }
  }
  else {
    if (uVar4 >> 10 < 0x37) goto joined_r0x0744986c;
    uVar14 = 0;
    if (uVar15 == 0) {
      if (plVar6 == (long *)0x0) {
        if (param_4 == 0) {
          plVar6 = (long *)param_1[5];
          if (plVar6 == (long *)0x0) goto LAB_07449a08;
          plVar6 = (long *)(**(code **)(*plVar6 + 0x178))(plVar6,*(undefined8 *)(*plVar6 + 0x180));
        }
        else {
          plVar6 = (long *)System_Text_Encoder__get_FallbackBuffer(param_4,0);
        }
        if (plVar6 == (long *)0x0) goto LAB_07449a08;
        System_Text_EncoderFallbackBuffer__InternalInitialize(plVar6,param_2,puVar1,param_4,0,0);
      }
      lVar11 = *plVar6;
      local_68 = puVar12;
LAB_074499cc:
      (**(code **)(lVar11 + 0x1d8))(plVar6,uVar4,&local_68,*(undefined8 *)(lVar11 + 0x1e0));
      iVar13 = iVar13 + -2;
      puVar12 = local_68;
      uVar14 = 0;
    }
  }
  goto LAB_07449748;
}

