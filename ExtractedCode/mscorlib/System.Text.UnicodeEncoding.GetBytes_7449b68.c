// rea decompile_all
// name: System.Text.UnicodeEncoding$$GetBytes
// address: 0x7449b68
// body: available
// range: 0x7449b68-0x744a203 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x744a100 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x744a184 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Text_UnicodeEncoding__GetBytes
              (long *param_1,ulong *param_2,int param_3,ulong *param_4,int param_5,long param_6)

{
  ushort *puVar1;
  ulong *puVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined2 uVar16;
  uint uVar17;
  uint uVar18;
  ulong *puVar19;
  ulong *puVar20;
  undefined2 local_6c [2];
  ulong *local_68;
  
  if ((DAT_095210ae & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c640);
    DAT_095210ae = 1;
  }
  puVar2 = (ulong *)((long)param_2 + (long)param_3 * 2);
  local_68 = (ulong *)0x0;
  if (param_6 == 0) {
    plVar7 = (long *)0x0;
    uVar17 = 0;
  }
  else {
    uVar17 = (uint)*(ushort *)(param_6 + 0x20);
    uVar6 = System_Text_Encoder__get_InternalHasFallbackBuffer(param_6,0);
    if ((uVar6 & 1) == 0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = (long *)System_Text_Encoder__get_FallbackBuffer(param_6,0);
      if (plVar7 == (long *)0x0) {
LAB_0744a100:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar5 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
      if ((0 < iVar5) && (*(char *)(param_6 + 0x31) != '\0')) {
        uVar8 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
        FUN_039b1d98(param_6);
        uVar9 = *(undefined8 *)(param_6 + 0x10);
        FUN_039b1d98(uVar9);
        uVar9 = System_Object__GetType(uVar9,0);
        uVar10 = thunk_FUN_03fc39d4(&DAT_09208350);
        uVar9 = SR__Format(uVar10,uVar8,uVar9,0);
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar8 = thunk_FUN_03f9944c();
        System_ArgumentException___ctor(uVar8,uVar9,0);
        goto LAB_0744a170;
      }
      System_Text_EncoderFallbackBuffer__InternalInitialize(plVar7,param_2,puVar2,param_6,0,0);
    }
  }
  bVar4 = false;
  uVar6 = (long)param_4 + (long)param_5;
  puVar19 = param_4;
  puVar20 = param_2;
LAB_07449c58:
  uVar18 = uVar17;
  uVar16 = (undefined2)uVar18;
  if (plVar7 != (long *)0x0) {
    uVar17 = System_Text_EncoderFallbackBuffer__InternalGetNextChar(plVar7,0);
    uVar17 = uVar17 & 0xffff;
    if (uVar17 == 0) goto LAB_07449c80;
LAB_07449c88:
    if (uVar17 == 0) {
      if (*(char *)((long)param_1 + 0x39) == '\0') {
        if (((((ulong)puVar20 & 7) == 0) && (((ulong)puVar19 & 7) == 0)) && (uVar18 == 0)) {
          lVar11 = (long)puVar2 - (long)puVar20;
          lVar14 = (long)(uVar6 - (long)puVar19) >> 1;
          if (lVar11 < 0) {
            lVar11 = lVar11 + 1;
          }
          if (lVar11 >> 1 <= lVar14) {
            lVar14 = lVar11 >> 1;
          }
          puVar12 = (ulong *)((long)puVar20 + lVar14 * 2 + -6);
          for (; puVar20 < puVar12; puVar20 = puVar20 + 1) {
            uVar15 = *puVar20;
            if (((uVar15 & 0x8000800080008000) != 0) &&
               ((((uVar13 = uVar15 & 0xf800f800f800f800 ^ 0xd800d800d800d800, (uVar13 & 0xf800) == 0
                  || ((uVar13 & 0xf8000000) == 0)) || (uVar13 >> 0x3b == 0)) ||
                ((uVar13 & 0xf80000000000) == 0)))) {
              if (*(int *)(DAT_0918c640 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              if ((uVar15 & 0xfc00fc00fc00fc00) != *(ulong *)(*(long *)(DAT_0918c640 + 0xb8) + 0x20)
                 ) break;
              uVar15 = *puVar20;
            }
            *puVar19 = uVar15;
            puVar19 = puVar19 + 1;
          }
LAB_07449e28:
          if (puVar2 <= puVar20) goto LAB_0744a0b4;
        }
        else if (((uVar18 == 0) && (((ulong)puVar19 & 1) == 0)) &&
                ((((uint)puVar20 ^ (uint)puVar19) & 7) != 0)) {
          lVar11 = (long)puVar2 - (long)puVar20;
          lVar14 = (long)(uVar6 - (long)puVar19) >> 1;
          if (lVar11 < 0) {
            lVar11 = lVar11 + 1;
          }
          if (lVar11 >> 1 <= lVar14) {
            lVar14 = lVar11 >> 1;
          }
          puVar12 = (ulong *)((long)puVar20 + lVar14 * 2 + -2);
joined_r0x07449ce0:
          do {
            if (puVar12 <= puVar20) goto LAB_07449e28;
            uVar3 = (ushort)*puVar20;
            if ((uVar3 + 0x2000 >> 0xb & 0x1f) < 0x1f) {
              if (0x1e < (*(ushort *)((long)puVar20 + 2) + 0x2000 >> 0xb & 0x1f)) {
                *(ushort *)puVar19 = uVar3;
                puVar19 = (ulong *)((long)puVar19 + 2);
                puVar20 = (ulong *)((long)puVar20 + 2);
                goto joined_r0x07449ce0;
              }
            }
            else if ((0x36 < uVar3 >> 10) || ((*puVar20 & 0xfc000000) != 0xdc000000))
            goto LAB_07449e28;
            *(ushort *)puVar19 = uVar3;
            puVar1 = (ushort *)((long)puVar20 + 2);
            puVar20 = (ulong *)((long)puVar20 + 4);
            *(ushort *)((long)puVar19 + 2) = *puVar1;
            puVar19 = (ulong *)((long)puVar19 + 4);
          } while( true );
        }
      }
      uVar17 = (uint)(ushort)*puVar20;
      puVar20 = (ulong *)((long)puVar20 + 2);
    }
    if ((uVar17 + 0x2000 >> 0xb & 0x1f) < 0x1f) {
      if (uVar18 != 0) goto LAB_07449e8c;
LAB_07449eb4:
      if (uVar6 <= (long)puVar19 + 1U) {
        if ((plVar7 == (long *)0x0) || (*(char *)((long)plVar7 + 0x2a) == '\0')) {
          puVar20 = (ulong *)((long)puVar20 + -2);
        }
        else {
LAB_0744a084:
          (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
        }
LAB_0744a09c:
        System_Text_Encoding__ThrowBytesOverflow(param_1,param_6,puVar19 == param_4);
        goto LAB_0744a0b4;
      }
      uVar18 = uVar17 >> 8;
      if (*(char *)((long)param_1 + 0x39) == '\0') {
        *(char *)puVar19 = (char)uVar17;
      }
      else {
        *(char *)puVar19 = (char)(uVar17 >> 8);
        uVar18 = uVar17;
      }
      puVar12 = (ulong *)((long)puVar19 + 2);
      *(char *)((long)puVar19 + 1) = (char)uVar18;
      goto LAB_07449ee8;
    }
    if (uVar17 >> 10 < 0x37) goto LAB_07449e84;
    if (uVar18 != 0) {
      if ((long)puVar19 + 3U < uVar6) {
        if (*(char *)((long)param_1 + 0x39) == '\0') {
          *(char *)puVar19 = (char)uVar18;
          uVar18 = uVar18 >> 8;
        }
        else {
          *(char *)puVar19 = (char)(uVar18 >> 8);
        }
        *(char *)((long)puVar19 + 1) = (char)uVar18;
        puVar19 = (ulong *)((long)puVar19 + 2);
        goto LAB_07449eb4;
      }
      if ((plVar7 != (long *)0x0) && (*(char *)((long)plVar7 + 0x2a) != '\0')) {
        (**(code **)(*plVar7 + 0x1a8))(plVar7,*(undefined8 *)(*plVar7 + 0x1b0));
        goto LAB_0744a084;
      }
      puVar20 = (ulong *)((long)puVar20 + -4);
      goto LAB_0744a09c;
    }
    if (plVar7 == (long *)0x0) {
      if (param_6 == 0) {
        plVar7 = (long *)param_1[5];
        if (plVar7 == (long *)0x0) goto LAB_0744a100;
        plVar7 = (long *)(**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
      }
      else {
        plVar7 = (long *)System_Text_Encoder__get_FallbackBuffer(param_6,0);
      }
      if (plVar7 == (long *)0x0) goto LAB_0744a100;
      System_Text_EncoderFallbackBuffer__InternalInitialize(plVar7,param_2,puVar2,param_6,1,0);
    }
    lVar11 = *plVar7;
    local_68 = puVar20;
    goto LAB_0744a044;
  }
  uVar17 = 0;
LAB_07449c80:
  if (puVar20 < puVar2) goto LAB_07449c88;
  if (uVar18 == 0) {
LAB_0744a0b4:
    iVar5 = (int)puVar19;
    if (param_6 == 0) goto LAB_0744a0d8;
    uVar16 = 0;
  }
  else if ((param_6 == 0) || (*(char *)(param_6 + 0x30) != '\0')) {
    if (!bVar4) {
      if (plVar7 == (long *)0x0) {
        if (param_6 == 0) {
          plVar7 = (long *)param_1[5];
          if (plVar7 == (long *)0x0) goto LAB_0744a100;
          plVar7 = (long *)(**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
        }
        else {
          plVar7 = (long *)System_Text_Encoder__get_FallbackBuffer(param_6,0);
        }
        if (plVar7 == (long *)0x0) goto LAB_0744a100;
        System_Text_EncoderFallbackBuffer__InternalInitialize(plVar7,param_2,puVar2,param_6,1,0);
      }
      local_68 = puVar20;
      (**(code **)(*plVar7 + 0x1d8))(plVar7,uVar18,&local_68,*(undefined8 *)(*plVar7 + 0x1e0));
      bVar4 = true;
      puVar20 = local_68;
      uVar17 = 0;
      goto LAB_07449c58;
    }
    local_6c[0] = uVar16;
    uVar8 = FUN_03f5c42c(DAT_09535460,local_6c);
    uVar9 = thunk_FUN_03fc39d4(&DAT_0920b760);
    uVar9 = SR__Format(uVar9,uVar8,0);
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar8 = thunk_FUN_03f9944c();
    uVar10 = thunk_FUN_03fc39d4(&DAT_09218b60);
    System_ArgumentException___ctor(uVar8,uVar9,uVar10,0);
LAB_0744a170:
    uVar9 = thunk_FUN_03fc39d4(&DAT_091ddbe8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar8,uVar9);
  }
  iVar5 = (int)puVar19;
  *(undefined2 *)(param_6 + 0x20) = uVar16;
  uVar6 = (long)puVar20 - (long)param_2;
  if ((long)uVar6 < 0) {
    uVar6 = uVar6 + 1;
  }
  *(int *)(param_6 + 0x34) = (int)(uVar6 >> 1);
LAB_0744a0d8:
  return iVar5 - (int)param_4;
LAB_07449e84:
  if (uVar18 != 0) {
LAB_07449e8c:
    if (plVar7 == (long *)0x0) {
      if (param_6 == 0) {
        plVar7 = (long *)param_1[5];
        if (plVar7 == (long *)0x0) goto LAB_0744a100;
        plVar7 = (long *)(**(code **)(*plVar7 + 0x178))(plVar7,*(undefined8 *)(*plVar7 + 0x180));
      }
      else {
        plVar7 = (long *)System_Text_Encoder__get_FallbackBuffer(param_6,0);
      }
      if (plVar7 == (long *)0x0) goto LAB_0744a100;
      System_Text_EncoderFallbackBuffer__InternalInitialize(plVar7,param_2,puVar2,param_6,1,0);
    }
    lVar11 = *plVar7;
    uVar17 = uVar18;
    local_68 = (ulong *)((long)puVar20 + -2);
LAB_0744a044:
    (**(code **)(lVar11 + 0x1d8))(plVar7,uVar17,&local_68,*(undefined8 *)(lVar11 + 0x1e0));
    puVar12 = puVar19;
    puVar20 = local_68;
LAB_07449ee8:
    puVar19 = puVar12;
    uVar17 = 0;
  }
  goto LAB_07449c58;
}

