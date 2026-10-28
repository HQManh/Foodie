// rea decompile_all
// name: System.Array$$CreateInstance
// address: 0x75dcd2c
// body: available
// range: 0x75dcd2c-0x75dcd2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Array__CreateInstance(long *param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  
  if ((DAT_09521eae & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a400);
    DAT_09521eae = 1;
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (param_1 == (long *)0x0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    puVar9 = &DAT_0921add0;
  }
  else if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    puVar9 = &DAT_0921e670;
  }
  else {
    if (param_3 != 0) {
      plVar3 = (long *)(**(code **)(*param_1 + 0x338))(param_1,*(undefined8 *)(*param_1 + 0x340));
      if (plVar3 == (long *)0x0) {
LAB_075dcdc4:
        plVar3 = (long *)0x0;
      }
      else {
        if (*(byte *)(*plVar3 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) goto LAB_075dcdc4;
        if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) !=
            DAT_0918a400) {
          plVar3 = (long *)0x0;
        }
      }
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar10 = DAT_095353f8;
      if (plVar3 == (long *)0x0) {
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar4 = thunk_FUN_03f9944c();
        uVar8 = thunk_FUN_03fc39d4(&DAT_09211258);
        uVar7 = thunk_FUN_03fc39d4(&DAT_0921add0);
        System_ArgumentException___ctor(uVar4,uVar8,uVar7,0);
      }
      else {
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = System_Type__GetTypeFromHandle(lVar10 + 0x20);
        uVar5 = (**(code **)(*plVar3 + 0x968))(plVar3,uVar4,*(undefined8 *)(*plVar3 + 0x970));
        if ((uVar5 & 1) == 0) {
          uVar5 = (**(code **)(*plVar3 + 0x298))(plVar3,*(undefined8 *)(*plVar3 + 0x2a0));
          if ((uVar5 & 1) == 0) {
            iVar1 = *(int *)(param_2 + 0x18);
            if (iVar1 < 1) {
              thunk_FUN_03fc39d4(&DAT_09181548);
              uVar4 = thunk_FUN_03f9944c();
              puVar6 = &DAT_091fbfe0;
            }
            else {
              if (iVar1 == *(int *)(param_3 + 0x18)) {
                lVar10 = 8;
                do {
                  if (-iVar1 + (int)lVar10 == 8) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  uVar2 = *(uint *)(param_2 + lVar10 * 4);
                  if ((int)uVar2 < 0) {
                    thunk_FUN_03fc39d4(&DAT_09181558);
                    uVar4 = thunk_FUN_03f9944c();
                    uVar8 = thunk_FUN_03fc39d4(&DAT_0921e670);
                    puVar6 = &DAT_09201150;
LAB_075dcf20:
                    uVar7 = thunk_FUN_03fc39d4(puVar6);
                    System_ArgumentOutOfRangeException___ctor(uVar4,uVar8,uVar7,0);
                    goto LAB_075dcf38;
                  }
                  if (0x7fffffff < (long)((long)*(int *)(param_3 + lVar10 * 4) + (ulong)uVar2)) {
                    thunk_FUN_03fc39d4(&DAT_09181558);
                    uVar4 = thunk_FUN_03f9944c();
                    uVar8 = thunk_FUN_03fc39d4(&DAT_0921e670);
                    puVar6 = &DAT_09206b80;
                    goto LAB_075dcf20;
                  }
                  lVar10 = lVar10 + 1;
                } while (-iVar1 + (int)lVar10 != 8);
                if (iVar1 < 0x100) {
                  FUN_03f6ae9c(plVar3,param_2,param_3);
                  return;
                }
                thunk_FUN_03fc39d4(&DAT_0918c288);
                uVar4 = thunk_FUN_03f9944c();
                System_TypeLoadException___ctor(uVar4,0);
                goto LAB_075dcf38;
              }
              thunk_FUN_03fc39d4(&DAT_09181548);
              uVar4 = thunk_FUN_03f9944c();
              puVar6 = &DAT_091fbfd8;
            }
            uVar8 = thunk_FUN_03fc39d4(puVar6);
            System_ArgumentException___ctor(uVar4,uVar8,0);
            goto LAB_075dcf38;
          }
          thunk_FUN_03fc39d4(&DAT_09188920);
          uVar4 = thunk_FUN_03f9944c();
          puVar6 = &DAT_091fbf68;
        }
        else {
          thunk_FUN_03fc39d4(&DAT_09188920);
          uVar4 = thunk_FUN_03f9944c();
          puVar6 = &DAT_091fbf70;
        }
        uVar8 = thunk_FUN_03fc39d4(puVar6);
        System_NotSupportedException___ctor(uVar4,uVar8,0);
      }
      goto LAB_075dcf38;
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    puVar9 = (undefined8 *)&DAT_0921ec70;
  }
  uVar8 = thunk_FUN_03fc39d4(puVar9);
  System_ArgumentNullException___ctor(uVar4,uVar8,0);
LAB_075dcf38:
  uVar8 = thunk_FUN_03fc39d4(&DAT_091c07d0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar8);
}

