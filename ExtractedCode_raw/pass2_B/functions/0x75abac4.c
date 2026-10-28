// rea decompile_all
// name: System.__DTString$$GetRegularToken
// address: 0x75abac4
// body: available
// range: 0x75abac4-0x75abdf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75abd60 to 0x7506c58 System.Globalization.DateTimeFormatInfo$$Tokenize (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75abdec to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75abdf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System___DTString__GetRegularToken(long *param_1,undefined4 *param_2,int *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  undefined8 local_68;
  
  if ((DAT_09521c81 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835a8);
    FUN_03f5c2a4(&DAT_0918db18);
    DAT_09521c81 = 1;
  }
  lVar9 = DAT_0918db18;
  *param_3 = 0;
  lVar8 = param_1[2];
  local_68 = 0;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((DAT_09521c7b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_09521c7b = 1;
  }
  if ((int)lVar8 < (int)param_1[1]) {
    *param_2 = 0xb;
    while( true ) {
      uVar5 = *(undefined2 *)((long)param_1 + 0x14);
      if (*(int *)(DAT_091835a8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar10 = System_DateTimeParse__IsDigit(uVar5,0);
      uVar6 = *(ushort *)((long)param_1 + 0x14);
      if ((uVar10 & 1) != 0) break;
      if (*(int *)(DAT_09535460 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar10 = System_Char__IsWhiteSpace(uVar6,0);
      if ((uVar10 & 1) == 0) {
        if (param_4 != 0) {
          System_Globalization_DateTimeFormatInfo__Tokenize(param_4,0xff,param_2,param_3,param_1,0);
          return;
        }
        goto LAB_075abdf0;
      }
      do {
        iVar2 = *(int *)(DAT_0918db18 + 0xe4);
        iVar1 = (int)param_1[2] + 1;
        *(int *)(param_1 + 2) = iVar1;
        if (iVar2 == 0) {
          FUN_03f5c424();
        }
        if ((DAT_09521c7b & 1) == 0) {
          FUN_03f5c2a4(&DAT_091b9810);
          DAT_09521c7b = 1;
        }
        if ((int)*(uint *)(param_1 + 1) <= iVar1) goto LAB_075abc50;
        if (*(uint *)(param_1 + 1) <= *(uint *)(param_1 + 2)) goto LAB_075abdec;
        uVar5 = *(undefined2 *)(*param_1 + (long)(int)*(uint *)(param_1 + 2) * 2);
        iVar1 = *(int *)(DAT_09535460 + 0xe4);
        *(undefined2 *)((long)param_1 + 0x14) = uVar5;
        if (iVar1 == 0) {
          FUN_03f5c424();
        }
        uVar10 = System_Char__IsWhiteSpace(uVar5,0);
      } while ((uVar10 & 1) != 0);
    }
    *param_3 = uVar6 - 0x30;
    uVar3 = *(uint *)(param_1 + 2);
    uVar4 = uVar3;
    while( true ) {
      lVar8 = DAT_0918db18;
      *(uint *)(param_1 + 2) = uVar4 + 1;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if ((DAT_09521c7b & 1) == 0) {
        FUN_03f5c2a4(&DAT_091b9810);
        DAT_09521c7b = 1;
      }
      uVar7 = *(uint *)(param_1 + 2);
      if ((int)*(uint *)(param_1 + 1) <= (int)(uVar4 + 1)) break;
      if (*(uint *)(param_1 + 1) <= uVar7) goto LAB_075abdec;
      uVar6 = *(ushort *)(*param_1 + (long)(int)uVar7 * 2);
      *(ushort *)((long)param_1 + 0x14) = uVar6;
      if (uVar6 - 0x3a < 0xfffffff6) break;
      *param_3 = (uint)uVar6 + *param_3 * 10 + -0x30;
      uVar4 = *(uint *)(param_1 + 2);
    }
    if ((int)(uVar7 - uVar3) < 9) {
      if ((int)(uVar7 - uVar3) < 3) {
        uVar11 = 1;
      }
      else {
        uVar11 = 2;
      }
      *param_2 = uVar11;
    }
    else {
      *param_2 = 1;
      *param_3 = -1;
    }
    if ((char)param_1[4] != '\0') {
      lVar8 = param_1[2];
      uVar5 = *(undefined2 *)((long)param_1 + 0x14);
      *(uint *)(param_1 + 2) = uVar3;
      if (*(uint *)(param_1 + 1) <= uVar3) {
LAB_075abdec:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined2 *)((long)param_1 + 0x14) = *(undefined2 *)(*param_1 + (long)(int)uVar3 * 2);
      if (param_4 == 0) {
LAB_075abdf0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar10 = System_Globalization_DateTimeFormatInfo__Tokenize
                         (param_4,0xff,(long)&local_68 + 4,&local_68,param_1,0);
      if ((uVar10 & 1) == 0) {
        *(int *)(param_1 + 2) = (int)lVar8;
        *(undefined2 *)((long)param_1 + 0x14) = uVar5;
      }
      else {
        *param_2 = local_68._4_4_;
        *param_3 = (int)local_68;
      }
    }
  }
  else {
LAB_075abc50:
    *param_2 = 6;
  }
  return;
}

