// rea decompile_all
// name: System.ParseNumbers$$StringToInt
// address: 0x75c5fec
// body: available
// range: 0x75c5fec-0x75c63a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75c6218 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75c63a0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_ParseNumbers__StringToInt
              (long param_1,undefined8 param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  uint local_54;
  
  if ((DAT_09521d92 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_09521d92 = 1;
  }
  iVar8 = 10;
  if (param_3 != -1) {
    iVar8 = param_3;
  }
  local_54 = *param_5;
  uVar9 = (uint)(CONCAT44(iVar8,iVar8 + -2) >> 1);
  if (7 < uVar9 || (1 << (ulong)(uVar9 & 0x1f) & 0x99U) == 0) {
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar4 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_09205170);
    uVar6 = thunk_FUN_03fc39d4(&DAT_09221520);
    System_ArgumentException___ctor(uVar4,uVar7,uVar6,0);
    goto LAB_075c638c;
  }
  if (((int)local_54 < 0) || (uVar9 = (uint)param_2, (int)uVar9 <= (int)local_54)) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar4 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_092049a8);
    System_ArgumentOutOfRangeException___ctor(uVar4,uVar7,0);
    goto LAB_075c638c;
  }
  if (((param_4 & 0x3000) == 0) &&
     (System_ParseNumbers__EatWhiteSpace(param_1,param_2,&local_54), local_54 == uVar9)) {
    thunk_FUN_03fc39d4(&DAT_09184908);
    uVar4 = thunk_FUN_03f9944c();
    puVar5 = (undefined8 *)&DAT_09204c98;
    goto LAB_075c62ac;
  }
  if (uVar9 <= local_54) goto LAB_075c6218;
  sVar2 = *(short *)(param_1 + (long)(int)local_54 * 2);
  if (sVar2 == 0x2b) {
    local_54 = local_54 + 1;
LAB_075c60f0:
    bVar11 = false;
    iVar10 = 1;
LAB_075c60f4:
    if (((param_3 == 0x10) || (param_3 == -1)) && (uVar1 = local_54 + 1, (int)uVar1 < (int)uVar9)) {
      if (uVar9 <= local_54) {
LAB_075c6218:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (*(short *)(param_1 + (long)(int)local_54 * 2) == 0x30) {
        if (uVar9 <= uVar1) goto LAB_075c6218;
        if ((*(ushort *)(param_1 + (long)(int)uVar1 * 2) | 0x20) == 0x78) {
          local_54 = local_54 + 2;
          iVar8 = 0x10;
        }
      }
    }
    uVar1 = local_54;
    uVar3 = System_ParseNumbers__GrabInts(iVar8,param_1,param_2,&local_54,param_4 >> 9 & 1);
    if (local_54 == uVar1) {
      thunk_FUN_03fc39d4(&DAT_09184908);
      uVar4 = thunk_FUN_03f9944c();
      puVar5 = (undefined8 *)&DAT_091ff520;
    }
    else {
      if (((param_4 >> 0xc & 1) == 0) || ((int)uVar9 <= (int)local_54)) {
        *param_5 = local_54;
        if ((param_4 >> 10 & 1) == 0) {
          if ((param_4 >> 0xb & 1) == 0) {
            if (uVar3 != 0x80000000) {
              bVar11 = true;
            }
            if ((((param_4 >> 9 & 1) != 0) || (iVar8 != 10)) || (bVar11)) {
LAB_075c61f0:
              if (iVar8 != 10) {
                iVar10 = 1;
              }
              return uVar3 * iVar10;
            }
            thunk_FUN_03fc39d4(&DAT_09188d78);
            uVar4 = thunk_FUN_03f9944c();
            puVar5 = &DAT_09212d50;
          }
          else {
            if (uVar3 < 0x10000) goto LAB_075c61f0;
            thunk_FUN_03fc39d4(&DAT_09188d78);
            uVar4 = thunk_FUN_03f9944c();
            puVar5 = (undefined8 *)&DAT_09212d48;
          }
        }
        else {
          if (uVar3 < 0x100) goto LAB_075c61f0;
          thunk_FUN_03fc39d4(&DAT_09188d78);
          uVar4 = thunk_FUN_03f9944c();
          puVar5 = (undefined8 *)&DAT_09212d40;
        }
        goto LAB_075c637c;
      }
      thunk_FUN_03fc39d4(&DAT_09184908);
      uVar4 = thunk_FUN_03f9944c();
      puVar5 = &DAT_091fb550;
    }
LAB_075c62ac:
    uVar7 = thunk_FUN_03fc39d4(puVar5);
    System_FormatException___ctor(uVar4,uVar7,0);
  }
  else {
    if (sVar2 != 0x2d) goto LAB_075c60f0;
    if (iVar8 != 10) {
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar4 = thunk_FUN_03f9944c();
      uVar7 = thunk_FUN_03fc39d4(&DAT_0920dc48);
      System_ArgumentException___ctor(uVar4,uVar7,0);
      goto LAB_075c638c;
    }
    if ((param_4 >> 9 & 1) == 0) {
      local_54 = local_54 + 1;
      iVar10 = -1;
      bVar11 = true;
      goto LAB_075c60f4;
    }
    thunk_FUN_03fc39d4(&DAT_09188d78);
    uVar4 = thunk_FUN_03f9944c();
    puVar5 = (undefined8 *)&DAT_0920fff8;
LAB_075c637c:
    uVar7 = thunk_FUN_03fc39d4(puVar5);
    System_OverflowException___ctor(uVar4,uVar7);
  }
LAB_075c638c:
  uVar7 = thunk_FUN_03fc39d4(&DAT_091d5790);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar7);
}

