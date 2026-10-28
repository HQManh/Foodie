// rea decompile_all
// name: System.TypeSpec$$Parse
// address: 0x760f184
// body: available
// range: 0x760f184-0x760fd6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x760f9e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760fa5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760fc98 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x760fd34 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_TypeSpec__Parse(long param_1,uint *param_2,uint param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  int iVar17;
  undefined2 local_68 [2];
  uint local_64;
  
  if ((DAT_09522047 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091815b8);
    FUN_03f5c2a4(&DAT_091b1260);
    FUN_03f5c2a4(&DAT_091b1258);
    FUN_03f5c2a4(&DAT_0917cef8);
    FUN_03f5c2a4(&DAT_091893f8);
    FUN_03f5c2a4(&DAT_0918c2b8);
    DAT_09522047 = 1;
  }
  local_64 = *param_2;
  local_68[0] = 0;
  lVar5 = thunk_FUN_03f9944c(DAT_0918c2b8);
  System_Object___ctor(lVar5,0);
  System_TypeSpec__SkipSpace(param_1,&local_64);
  uVar14 = local_64;
  if (param_1 == 0) {
LAB_0760fa58:
    local_64 = uVar14;
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  bVar16 = (int)local_64 < *(int *)(param_1 + 0x10);
  uVar13 = local_64;
  uVar2 = local_64;
  if ((int)local_64 < *(int *)(param_1 + 0x10)) {
    do {
      uVar3 = System_String__get_Chars(param_1,uVar14,0);
      if (uVar3 < 0x2c) {
        if (uVar3 == 0x2b) {
          uVar6 = System_String__Substring(param_1,uVar13,uVar14 - uVar13,0);
          if (lVar5 == 0) goto LAB_0760fa58;
          System_TypeSpec__AddName(lVar5,uVar6);
          uVar13 = uVar14 + 1;
        }
        else if ((uVar3 == 0x26) || (uVar3 == 0x2a)) {
LAB_0760f310:
          local_64 = uVar14;
          sVar4 = System_String__get_Chars(param_1,uVar14,0);
          if ((sVar4 != 0x5b) && ((param_3 & 1) != 0)) {
            thunk_FUN_03fc39d4(&DAT_09181548);
            uVar6 = thunk_FUN_03f9944c();
            puVar9 = &DAT_09203430;
            goto LAB_0760fcf8;
          }
          uVar6 = System_String__Substring(param_1,uVar13,uVar14 - uVar13,0);
          if (lVar5 == 0) goto LAB_0760f9e8;
          System_TypeSpec__AddName(lVar5,uVar6);
          uVar13 = uVar14 + 1;
          uVar2 = local_64;
          break;
        }
      }
      else if (uVar3 < 0x5c) {
        if (uVar3 == 0x2c) {
LAB_0760f8d8:
          local_64 = uVar14;
          uVar6 = System_String__Substring(param_1,uVar13,uVar14 - uVar13,0);
          if (lVar5 == 0) goto LAB_0760f9e8;
          System_TypeSpec__AddName(lVar5,uVar6);
          uVar13 = uVar14 + 1;
          uVar2 = local_64;
          if (((param_3 & 1) != 0) && ((param_4 & 1) == 0)) goto LAB_0760f9c0;
          break;
        }
        if (uVar3 == 0x5b) goto LAB_0760f310;
      }
      else if (uVar3 == 0x5c) {
        uVar14 = uVar14 + 1;
      }
      else if (uVar3 == 0x5d) goto LAB_0760f8d8;
      uVar14 = uVar14 + 1;
      bVar16 = (int)uVar14 < *(int *)(param_1 + 0x10);
      uVar2 = uVar14;
    } while ((int)uVar14 < *(int *)(param_1 + 0x10));
  }
  local_64 = uVar2;
  iVar17 = uVar14 - uVar13;
  if (iVar17 == 0 || (int)uVar14 < (int)uVar13) {
    if (iVar17 == 0) {
      if (lVar5 == 0) goto LAB_0760f9e8;
      uVar6 = **(undefined8 **)(DAT_09535468 + 0xb8);
      goto LAB_0760f39c;
    }
  }
  else {
    uVar6 = System_String__Substring(param_1,uVar13,iVar17,0);
    if (lVar5 == 0) {
LAB_0760f9e8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
LAB_0760f39c:
    System_TypeSpec__AddName(lVar5,uVar6);
  }
  if ((bVar16) && ((int)uVar14 < *(int *)(param_1 + 0x10))) {
    uVar13 = uVar14;
LAB_0760f3bc:
    uVar3 = System_String__get_Chars(param_1,uVar13,0);
    if (uVar3 < 0x2b) {
      if (uVar3 == 0x26) {
        if (lVar5 == 0) goto LAB_0760f9e8;
        if (*(char *)(lVar5 + 0x38) != '\0') {
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar6 = thunk_FUN_03f9944c();
          puVar9 = &DAT_091fd770;
          goto LAB_0760fcf8;
        }
        *(undefined1 *)(lVar5 + 0x38) = 1;
      }
      else {
        if (uVar3 != 0x2a) {
LAB_0760fa60:
          FUN_039b1d98(param_1);
          local_68[0] = System_String__get_Chars(param_1,uVar13,0);
          FUN_039afb80(DAT_09535460);
          uVar6 = System_Char__ToString(local_68,0);
          uVar10 = System_Int32__ToString(&local_64,0);
          uVar11 = thunk_FUN_03fc39d4(&DAT_091fc8c8);
          uVar8 = thunk_FUN_03fc39d4(&DAT_091f73f8);
          uVar6 = System_String__Concat(uVar11,uVar6,uVar8,uVar10,0);
LAB_0760fc4c:
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar10 = thunk_FUN_03f9944c();
          uVar11 = thunk_FUN_03fc39d4(&DAT_09224568);
          System_ArgumentException___ctor(uVar10,uVar6,uVar11,0);
          uVar6 = thunk_FUN_03fc39d4(&DAT_091dc560);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar10,uVar6);
        }
        if (lVar5 == 0) goto LAB_0760f9e8;
        if (*(char *)(lVar5 + 0x38) != '\0') {
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar6 = thunk_FUN_03f9944c();
          puVar9 = &DAT_091fd778;
          goto LAB_0760fcf8;
        }
        if ((int)(uVar13 + 1) < *(int *)(param_1 + 0x10)) {
          iVar17 = 0;
          do {
            iVar15 = iVar17;
            sVar4 = System_String__get_Chars(param_1,uVar13 + iVar15 + 1,0);
            if (sVar4 != 0x2a) {
              iVar17 = iVar15 + 1;
              uVar13 = uVar13 + iVar15;
              goto LAB_0760f5f8;
            }
            uVar14 = uVar13 + iVar15 + 1;
            iVar17 = iVar15 + 1;
          } while ((int)(uVar14 + 1) < *(int *)(param_1 + 0x10));
          iVar17 = iVar15 + 2;
          uVar13 = uVar14;
        }
        else {
          iVar17 = 1;
        }
LAB_0760f5f8:
        local_64 = uVar13;
        lVar7 = thunk_FUN_03f9944c(DAT_091893f8);
        System_Object___ctor(lVar7,0);
        *(int *)(lVar7 + 0x10) = iVar17;
LAB_0760f68c:
        System_TypeSpec__AddModifier(lVar5,lVar7);
      }
    }
    else {
      uVar14 = uVar13;
      if (uVar3 == 0x2c) {
        if ((param_3 & param_4 & 1) != 0) {
          iVar17 = *(int *)(param_1 + 0x10);
          if ((int)uVar13 < iVar17) goto LAB_0760f950;
          goto LAB_0760f97c;
        }
        if ((param_3 & 1) != 0) goto LAB_0760f9c0;
        if ((param_4 & 1) != 0) {
          lVar7 = System_String__Substring(param_1,uVar13 + 1,0);
          if ((lVar7 == 0) || (uVar6 = System_String__Trim(lVar7,0), lVar5 == 0)) goto LAB_0760f9e8;
          *(undefined8 *)(lVar5 + 0x18) = uVar6;
          thunk_FUN_03f5d7b8(lVar5 + 0x18,uVar6);
          uVar13 = *(uint *)(param_1 + 0x10);
        }
      }
      else {
        if (uVar3 != 0x5b) {
          if (uVar3 != 0x5d) goto LAB_0760fa60;
          if ((param_3 & 1) != 0) goto LAB_0760f9c0;
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar6 = thunk_FUN_03f9944c();
          puVar9 = &DAT_09212508;
LAB_0760fcf8:
          uVar10 = thunk_FUN_03fc39d4(puVar9);
          uVar11 = thunk_FUN_03fc39d4(&DAT_09224568);
          System_ArgumentException___ctor(uVar6,uVar10,uVar11,0);
LAB_0760fd20:
          uVar10 = thunk_FUN_03fc39d4(&DAT_091dc560);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar6,uVar10);
        }
        if (lVar5 == 0) goto LAB_0760f9e8;
        if (*(char *)(lVar5 + 0x38) != '\0') {
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar6 = thunk_FUN_03f9944c();
          puVar9 = &DAT_091fd048;
          goto LAB_0760fcf8;
        }
        local_64 = uVar13 + 1;
        if (*(int *)(param_1 + 0x10) <= (int)local_64) {
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar6 = thunk_FUN_03f9944c();
          puVar9 = &DAT_09205598;
          goto LAB_0760fcf8;
        }
        System_TypeSpec__SkipSpace(param_1,&local_64);
        uVar13 = local_64;
        sVar4 = System_String__get_Chars(param_1,local_64,0);
        if (((sVar4 == 0x2c) || (sVar4 = System_String__get_Chars(param_1,uVar13,0), sVar4 == 0x2a))
           || (sVar4 = System_String__get_Chars(param_1,uVar13,0), sVar4 == 0x5d)) {
          iVar17 = *(int *)(param_1 + 0x10);
          if ((int)uVar13 < iVar17) {
            uVar14 = 0;
            iVar15 = 1;
            do {
              sVar4 = System_String__get_Chars(param_1,uVar13,0);
              if (sVar4 == 0x5d) {
                iVar17 = *(int *)(param_1 + 0x10);
                break;
              }
              sVar4 = System_String__get_Chars(param_1,uVar13,0);
              if (sVar4 == 0x2a) {
                if (uVar14 != 0) {
                  thunk_FUN_03fc39d4(&DAT_09181548);
                  uVar6 = thunk_FUN_03f9944c();
                  puVar9 = &DAT_091fbf60;
                  goto LAB_0760fcf8;
                }
                uVar14 = 1;
              }
              else {
                sVar4 = System_String__get_Chars(param_1,uVar13,0);
                if (sVar4 != 0x2c) {
                  FUN_039b1d98(param_1);
                  local_68[0] = System_String__get_Chars(param_1,uVar13,0);
                  FUN_039afb80(DAT_09535460);
                  uVar6 = System_Char__ToString(local_68,0);
                  puVar9 = &DAT_09205658;
LAB_0760fc3c:
                  uVar10 = thunk_FUN_03fc39d4(puVar9);
                  uVar6 = System_String__Concat(uVar10,uVar6,0);
                  goto LAB_0760fc4c;
                }
                iVar15 = iVar15 + 1;
              }
              local_64 = uVar13 + 1;
              System_TypeSpec__SkipSpace(param_1,&local_64);
              iVar17 = *(int *)(param_1 + 0x10);
              uVar13 = local_64;
            } while ((int)local_64 < iVar17);
          }
          else {
            uVar14 = 0;
            iVar15 = 1;
          }
          if (((int)uVar13 < iVar17) &&
             (sVar4 = System_String__get_Chars(param_1,uVar13,0), sVar4 == 0x5d)) {
            if (iVar15 < 2 || ((uVar14 ^ 0xffffffff) & 1) != 0) {
              lVar7 = thunk_FUN_03f9944c(DAT_091815b8);
              System_ArraySpec___ctor(lVar7,iVar15,uVar14,0);
              goto LAB_0760f68c;
            }
            thunk_FUN_03fc39d4(&DAT_09181548);
            uVar6 = thunk_FUN_03f9944c();
            puVar9 = &DAT_09205588;
          }
          else {
            thunk_FUN_03fc39d4(&DAT_09181548);
            uVar6 = thunk_FUN_03f9944c();
            puVar9 = &DAT_092018b8;
          }
          goto LAB_0760fcf8;
        }
        lVar7 = thunk_FUN_03f9944c(DAT_0917cef8);
        FUN_057e0400(lVar7,DAT_091b1258);
        if (*(long *)(lVar5 + 0x30) != 0) {
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar6 = thunk_FUN_03f9944c();
          puVar9 = &DAT_0921bea0;
          goto LAB_0760fcf8;
        }
        iVar17 = *(int *)(param_1 + 0x10);
        if ((int)uVar13 < iVar17) {
          do {
            System_TypeSpec__SkipSpace(param_1,&local_64);
            uVar14 = local_64;
            sVar4 = System_String__get_Chars(param_1,local_64,0);
            if (sVar4 == 0x5b) {
              local_64 = uVar14 + 1;
              uVar6 = System_TypeSpec__Parse(param_1,&local_64,1,1);
              lVar1 = DAT_091b1260;
              if (lVar7 == 0) goto LAB_0760f9e8;
              lVar12 = *(long *)(lVar7 + 0x10);
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar12 == 0) goto LAB_0760f9e8;
              uVar14 = *(uint *)(lVar7 + 0x18);
              if (uVar14 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar14 + 1;
                *(undefined8 *)(lVar12 + (long)(int)uVar14 * 8 + 0x20) = uVar6;
                thunk_FUN_03f5d7b8();
              }
              else {
                FUN_057e0c68(lVar7,uVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70));
              }
              uVar14 = local_64;
              System_TypeSpec__BoundCheck(local_64,param_1);
              sVar4 = System_String__get_Chars(param_1,uVar14,0);
              if (sVar4 != 0x5d) {
                FUN_039b1d98(param_1);
                local_68[0] = System_String__get_Chars(param_1,uVar14,0);
                FUN_039afb80(DAT_09535460);
                uVar6 = System_Char__ToString(local_68,0);
                puVar9 = &DAT_09211b80;
                goto LAB_0760fc3c;
              }
              local_64 = uVar14 + 1;
            }
            else {
              uVar6 = System_TypeSpec__Parse(param_1,&local_64,1,0);
              lVar1 = DAT_091b1260;
              if (lVar7 == 0) goto LAB_0760f9e8;
              lVar12 = *(long *)(lVar7 + 0x10);
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar12 == 0) goto LAB_0760f9e8;
              uVar14 = *(uint *)(lVar7 + 0x18);
              if (uVar14 < *(uint *)(lVar12 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar14 + 1;
                *(undefined8 *)(lVar12 + (long)(int)uVar14 * 8 + 0x20) = uVar6;
                thunk_FUN_03f5d7b8();
              }
              else {
                FUN_057e0c68(lVar7,uVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70));
              }
            }
            uVar13 = local_64;
            System_TypeSpec__BoundCheck(local_64,param_1);
            sVar4 = System_String__get_Chars(param_1,uVar13,0);
            if (sVar4 == 0x5d) {
              iVar17 = *(int *)(param_1 + 0x10);
              break;
            }
            sVar4 = System_String__get_Chars(param_1,uVar13,0);
            if (sVar4 != 0x2c) {
              FUN_039b1d98(param_1);
              local_68[0] = System_String__get_Chars(param_1,uVar13,0);
              FUN_039afb80(DAT_09535460);
              uVar6 = System_Char__ToString(local_68,0);
              puVar9 = &DAT_092057b0;
              goto LAB_0760fc3c;
            }
            iVar17 = *(int *)(param_1 + 0x10);
            uVar13 = uVar13 + 1;
            local_64 = uVar13;
          } while ((int)uVar13 < iVar17);
        }
        if ((iVar17 <= (int)uVar13) ||
           (sVar4 = System_String__get_Chars(param_1,uVar13,0), sVar4 != 0x5d)) {
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar6 = thunk_FUN_03f9944c();
          puVar9 = &DAT_092018d8;
          goto LAB_0760fcf8;
        }
        *(long *)(lVar5 + 0x28) = lVar7;
        thunk_FUN_03f5d7b8(lVar5 + 0x28,lVar7);
      }
    }
    uVar14 = uVar13 + 1;
    uVar13 = uVar14;
    local_64 = uVar14;
    if (*(int *)(param_1 + 0x10) <= (int)uVar14) goto LAB_0760f9c0;
    goto LAB_0760f3bc;
  }
LAB_0760f9c0:
  *param_2 = uVar14;
  return lVar5;
  while (uVar14 = uVar14 + 1, (int)uVar14 < iVar17) {
LAB_0760f950:
    sVar4 = System_String__get_Chars(param_1,uVar14,0);
    iVar17 = *(int *)(param_1 + 0x10);
    if (sVar4 == 0x5d) break;
  }
LAB_0760f97c:
  if (iVar17 <= (int)uVar14) {
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar6 = thunk_FUN_03f9944c();
    uVar10 = thunk_FUN_03fc39d4(&DAT_09212510);
    System_ArgumentException___ctor(uVar6,uVar10,0);
    goto LAB_0760fd20;
  }
  lVar7 = System_String__Substring(param_1,uVar13 + 1,uVar14 + ~uVar13,0);
  if ((lVar7 == 0) || (uVar6 = System_String__Trim(lVar7,0), lVar5 == 0)) goto LAB_0760f9e8;
  *(undefined8 *)(lVar5 + 0x18) = uVar6;
  thunk_FUN_03f5d7b8(lVar5 + 0x18,uVar6);
  goto LAB_0760f9c0;
}

