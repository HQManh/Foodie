// rea decompile_all
// name: Newtonsoft.Json.Utilities.DateTimeUtils$$WriteDefaultIsoDate
// address: 0x768f924
// body: available
// range: 0x768f924-0x768fd4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x768fd48 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x768fd4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int Newtonsoft_Json_Utilities_DateTimeUtils__WriteDefaultIsoDate
              (long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = param_3;
  if ((DAT_09522592 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835c0);
    FUN_03f5c2a4(&DAT_09183548);
    DAT_09522592 = 1;
  }
  local_40 = 0;
  local_44 = 0;
  if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Newtonsoft_Json_Utilities_DateTimeUtils__GetDateValues
            (param_3,(long)&local_40 + 4,&local_40,&local_44);
  Newtonsoft_Json_Utilities_DateTimeUtils__CopyIntToCharArray(param_1,param_2,local_40._4_4_,4);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = *(uint *)(param_1 + 0x18);
  if (param_2 + 4U < uVar5) {
    uVar6 = param_2 + 6;
    *(undefined2 *)(param_1 + (long)(int)(param_2 + 4U) * 2 + 0x20) = 0x2d;
    lVar7 = -2;
    iVar4 = (int)local_40;
    do {
      if (uVar5 <= uVar6) goto LAB_0768fd48;
      bVar3 = lVar7 != -1;
      lVar7 = lVar7 + 1;
      lVar1 = (long)(int)uVar6;
      uVar6 = uVar6 - 1;
      *(short *)(param_1 + lVar1 * 2 + 0x20) = (short)iVar4 + (short)(iVar4 / 10) * -10 + 0x30;
      iVar4 = iVar4 / 10;
    } while (bVar3);
    if (param_2 + 7U < uVar5) {
      uVar6 = param_2 + 9;
      *(undefined2 *)(param_1 + (long)(int)(param_2 + 7U) * 2 + 0x20) = 0x2d;
      lVar7 = -2;
      iVar4 = local_44;
      do {
        if (uVar5 <= uVar6) goto LAB_0768fd48;
        bVar3 = lVar7 != -1;
        lVar7 = lVar7 + 1;
        lVar1 = (long)(int)uVar6;
        uVar6 = uVar6 - 1;
        *(short *)(param_1 + lVar1 * 2 + 0x20) = (short)iVar4 + (short)(iVar4 / 10) * -10 + 0x30;
        iVar4 = iVar4 / 10;
      } while (bVar3);
      if (param_2 + 10U < uVar5) {
        iVar4 = *(int *)(DAT_09183548 + 0xe4);
        *(undefined2 *)(param_1 + (long)(int)(param_2 + 10U) * 2 + 0x20) = 0x54;
        if (iVar4 == 0) {
          FUN_03f5c424();
        }
        iVar4 = System_DateTime__get_Hour(&local_38,0);
        uVar6 = *(uint *)(param_1 + 0x18);
        uVar5 = param_2 + 0xc;
        lVar7 = -2;
        do {
          if (uVar6 <= uVar5) goto LAB_0768fd48;
          lVar1 = (long)(int)uVar5;
          bVar3 = lVar7 != -1;
          lVar7 = lVar7 + 1;
          uVar5 = uVar5 - 1;
          *(short *)(param_1 + lVar1 * 2 + 0x20) = (short)iVar4 + (short)(iVar4 / 10) * -10 + 0x30;
          iVar4 = iVar4 / 10;
        } while (bVar3);
        if (param_2 + 0xdU < uVar6) {
          *(undefined2 *)(param_1 + (long)(int)(param_2 + 0xdU) * 2 + 0x20) = 0x3a;
          iVar4 = System_DateTime__get_Minute(&local_38,0);
          uVar6 = *(uint *)(param_1 + 0x18);
          uVar5 = param_2 + 0xf;
          lVar7 = -2;
          do {
            if (uVar6 <= uVar5) goto LAB_0768fd48;
            lVar1 = (long)(int)uVar5;
            bVar3 = lVar7 != -1;
            lVar7 = lVar7 + 1;
            uVar5 = uVar5 - 1;
            *(short *)(param_1 + lVar1 * 2 + 0x20) = (short)iVar4 + (short)(iVar4 / 10) * -10 + 0x30
            ;
            iVar4 = iVar4 / 10;
          } while (bVar3);
          if (param_2 + 0x10U < uVar6) {
            *(undefined2 *)(param_1 + (long)(int)(param_2 + 0x10U) * 2 + 0x20) = 0x3a;
            iVar4 = System_DateTime__get_Second(&local_38,0);
            uVar6 = *(uint *)(param_1 + 0x18);
            uVar5 = param_2 + 0x12;
            lVar7 = -2;
            do {
              if (uVar6 <= uVar5) goto LAB_0768fd48;
              lVar1 = (long)(int)uVar5;
              bVar3 = lVar7 != -1;
              lVar7 = lVar7 + 1;
              uVar5 = uVar5 - 1;
              *(short *)(param_1 + lVar1 * 2 + 0x20) =
                   (short)iVar4 + (short)(iVar4 / 10) * -10 + 0x30;
              iVar4 = iVar4 / 10;
            } while (bVar3);
            lVar7 = System_DateTime__get_Ticks(&local_38,0);
            iVar4 = (int)lVar7 +
                    ((int)(SUB168(SEXT816(lVar7) * ZEXT816(0xd6bf94d5e57a42bd),8) >> 0x17) -
                    ((int)(lVar7 / -0x6769800000000000) + (int)(lVar7 >> 0x3f))) * -10000000;
            if (iVar4 == 0) {
              iVar8 = 0x13;
            }
            else {
              iVar8 = 7;
              uVar5 = iVar4 * -0x33333333 + 0x19999998U >> 1 | (int)lVar7 * -0x80000000;
              while (uVar5 < 0x19999999) {
                iVar8 = iVar8 + -1;
                iVar4 = iVar4 / 10;
                uVar5 = iVar4 * -0x33333333 + 0x19999998U >> 1 | iVar4 * -0x80000000;
              }
              if (*(uint *)(param_1 + 0x18) <= param_2 + 0x13U) goto LAB_0768fd48;
              iVar2 = *(int *)(DAT_091835c0 + 0xe4);
              *(undefined2 *)(param_1 + (long)(int)(param_2 + 0x13U) * 2 + 0x20) = 0x2e;
              if (iVar2 == 0) {
                FUN_03f5c424();
              }
              if (iVar8 != 0) {
                uVar5 = *(uint *)(param_1 + 0x18);
                iVar2 = iVar8;
                do {
                  uVar6 = param_2 + 0x13 + iVar2;
                  if (uVar5 <= uVar6) goto LAB_0768fd48;
                  iVar2 = iVar2 + -1;
                  *(short *)(param_1 + (long)(int)uVar6 * 2 + 0x20) =
                       (short)iVar4 + (short)(iVar4 / 10) * -10 + 0x30;
                  iVar4 = iVar4 / 10;
                } while (iVar2 != 0);
              }
              iVar8 = iVar8 + 0x14;
            }
            return iVar8 + param_2;
          }
        }
      }
    }
  }
LAB_0768fd48:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

