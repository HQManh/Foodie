// rea decompile_all
// name: System.Array$$UnsafeCreateInstance
// address: 0x75dd160
// body: available
// range: 0x75dd160-0x75dd163 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Array__UnsafeCreateInstance(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  if ((DAT_09521ead & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a400);
    DAT_09521ead = 1;
  }
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (param_1 == (long *)0x0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    puVar5 = &DAT_0921add0;
  }
  else {
    if (param_2 != 0) {
      if (0xff < *(int *)(param_2 + 0x18)) {
        thunk_FUN_03fc39d4(&DAT_0918c288);
        uVar3 = thunk_FUN_03f9944c();
        System_TypeLoadException___ctor(uVar3,0);
        goto LAB_075d9b1c;
      }
      plVar2 = (long *)(**(code **)(*param_1 + 0x338))(param_1,*(undefined8 *)(*param_1 + 0x340));
      if (plVar2 == (long *)0x0) {
LAB_075d9978:
        plVar2 = (long *)0x0;
      }
      else {
        if (*(byte *)(*plVar2 + 0x130) < *(byte *)(DAT_0918a400 + 0x130)) goto LAB_075d9978;
        if (*(long *)(*(long *)(*plVar2 + 200) + (ulong)*(byte *)(DAT_0918a400 + 0x130) * 8 + -8) !=
            DAT_0918a400) {
          plVar2 = (long *)0x0;
        }
      }
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar1 = DAT_095353f8;
      if (plVar2 == (long *)0x0) {
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar3 = thunk_FUN_03f9944c();
        uVar8 = thunk_FUN_03fc39d4(&DAT_09211258);
        uVar6 = thunk_FUN_03fc39d4(&DAT_0921add0);
        System_ArgumentException___ctor(uVar3,uVar8,uVar6,0);
      }
      else {
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_Type__GetTypeFromHandle(lVar1 + 0x20);
        uVar4 = (**(code **)(*plVar2 + 0x968))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x970));
        if ((uVar4 & 1) == 0) {
          uVar4 = (**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
          if ((uVar4 & 1) == 0) {
            FUN_03f6ae9c(plVar2,param_2,0);
            return;
          }
          thunk_FUN_03fc39d4(&DAT_09188920);
          uVar3 = thunk_FUN_03f9944c();
          puVar7 = &DAT_091fbf68;
        }
        else {
          thunk_FUN_03fc39d4(&DAT_09188920);
          uVar3 = thunk_FUN_03f9944c();
          puVar7 = &DAT_091fbf70;
        }
        uVar8 = thunk_FUN_03fc39d4(puVar7);
        System_NotSupportedException___ctor(uVar3,uVar8,0);
      }
      goto LAB_075d9b1c;
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    puVar5 = &DAT_0921e670;
  }
  uVar8 = thunk_FUN_03fc39d4(puVar5);
  System_ArgumentNullException___ctor(uVar3,uVar8,0);
LAB_075d9b1c:
  uVar8 = thunk_FUN_03fc39d4(&DAT_091c07c0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar8);
}

