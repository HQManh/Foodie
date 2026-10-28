// rea decompile_all
// name: System.Array$$ConstrainedCopy
// address: 0x75dd3ac
// body: available
// range: 0x75dd3ac-0x75dd3af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Array__ConstrainedCopy(long param_1,int param_2,long param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar9 = thunk_FUN_03f9944c();
    puVar12 = &DAT_09222fb0;
  }
  else {
    if (param_3 != 0) {
      if (param_5 < 0) {
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar9 = thunk_FUN_03f9944c();
        puVar11 = &DAT_0921e638;
        goto LAB_075da380;
      }
      iVar1 = FUN_03f6b444();
      iVar2 = FUN_03f6b444(param_3);
      if (iVar1 != iVar2) {
        thunk_FUN_03fc39d4(&DAT_09189ad8);
        uVar9 = thunk_FUN_03f9944c();
        uVar14 = thunk_FUN_03fc39d4(&DAT_09209d50);
        System_RankException___ctor(uVar9,uVar14);
        goto LAB_075da518;
      }
      if (param_2 < 0) {
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar9 = thunk_FUN_03f9944c();
        puVar11 = (undefined8 *)&DAT_09222fd0;
LAB_075da380:
        uVar14 = thunk_FUN_03fc39d4(puVar11);
        puVar12 = &DAT_09212c78;
      }
      else {
        if (param_4 < 0) {
          thunk_FUN_03fc39d4(&DAT_09181558);
          uVar9 = thunk_FUN_03f9944c();
          puVar11 = (undefined8 *)&DAT_0921a5e0;
          goto LAB_075da380;
        }
        uVar7 = FUN_03f6b16c(param_1,param_2,param_3,param_4,param_5);
        if ((uVar7 & 1) != 0) {
          return;
        }
        uVar3 = FUN_03f6b404(param_1,0);
        uVar4 = FUN_03f6b404(param_3,0);
        iVar1 = param_4 - uVar4;
        if (-1 < iVar1) {
          iVar2 = param_2 - uVar3;
          iVar5 = System_Array__get_Length(param_1);
          if (iVar5 - param_5 < iVar2) {
            thunk_FUN_03fc39d4(&DAT_09181548);
            uVar9 = thunk_FUN_03f9944c();
            uVar14 = thunk_FUN_03fc39d4(&DAT_0921e638);
            System_ArgumentException___ctor(uVar9,uVar14,0);
          }
          else {
            iVar5 = System_Array__get_Length(param_3);
            if (iVar1 <= iVar5 - param_5) {
              plVar8 = (long *)System_Object__GetType(param_1,0);
              if (plVar8 != (long *)0x0) {
                (**(code **)(*plVar8 + 0x448))(plVar8,*(undefined8 *)(*plVar8 + 0x450));
                plVar8 = (long *)System_Object__GetType(param_3,0);
                if ((plVar8 != (long *)0x0) &&
                   (plVar8 = (long *)(**(code **)(*plVar8 + 0x448))
                                               (plVar8,*(undefined8 *)(*plVar8 + 0x450)),
                   plVar8 != (long *)0x0)) {
                  uVar6 = (**(code **)(*plVar8 + 0x638))(plVar8,*(undefined8 *)(*plVar8 + 0x640));
                  if ((param_1 == param_3) && (iVar2 <= iVar1)) {
                    for (; 0 < param_5; param_5 = param_5 + -1) {
                      uVar9 = FUN_03f6b56c(param_1,~uVar3 + param_2 + param_5);
                      FUN_03f6b6bc(param_1,uVar9,~uVar4 + param_4 + param_5);
                    }
                    return;
                  }
                  while( true ) {
                    if (param_5 == 0) {
                      return;
                    }
                    lVar10 = FUN_03f6b56c(param_1,iVar2);
                    if (lVar10 == 0 && ((uVar6 ^ 0xffffffff) & 1) == 0) break;
                    FUN_03f6b6bc(param_3,lVar10,iVar1);
                    param_5 = param_5 + -1;
                    iVar2 = iVar2 + 1;
                    iVar1 = iVar1 + 1;
                  }
                  thunk_FUN_03fc39d4(&DAT_09187090);
                  uVar9 = thunk_FUN_03f9944c();
                  System_InvalidCastException___ctor(uVar9,0);
                  goto LAB_075da518;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            thunk_FUN_03fc39d4(&DAT_09181548);
            uVar9 = thunk_FUN_03f9944c();
            uVar14 = thunk_FUN_03fc39d4(&DAT_09200810);
            uVar13 = thunk_FUN_03fc39d4(&DAT_0921a5d0);
            System_ArgumentException___ctor(uVar9,uVar14,uVar13,0);
          }
          goto LAB_075da518;
        }
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar9 = thunk_FUN_03f9944c();
        uVar14 = thunk_FUN_03fc39d4(&DAT_0921a5e0);
        puVar12 = &DAT_092049a0;
      }
      uVar13 = thunk_FUN_03fc39d4(puVar12);
      System_ArgumentOutOfRangeException___ctor(uVar9,uVar14,uVar13,0);
      goto LAB_075da518;
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar9 = thunk_FUN_03f9944c();
    puVar12 = &DAT_0921a5d0;
  }
  uVar14 = thunk_FUN_03fc39d4(puVar12);
  System_ArgumentNullException___ctor(uVar9,uVar14,0);
LAB_075da518:
  uVar14 = thunk_FUN_03fc39d4(&DAT_091c07a0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar9,uVar14);
}

