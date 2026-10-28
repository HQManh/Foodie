// rea decompile_all
// name: UniRx.InternalUtil.UnityEqualityComparer$$.cctor
// address: 0x418e428
// body: available
// range: 0x418e428-0x418eb27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x418eb24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UniRx_InternalUtil_UnityEqualityComparer___cctor(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((DAT_09516784 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09195a48);
    FUN_03f5c2a4(&DAT_09195a50);
    FUN_03f5c2a4(&DAT_09171080);
    FUN_03f5c2a4(&DAT_09171078);
    FUN_03f5c2a4(&DAT_09195a58);
    FUN_03f5c2a4(&DAT_09171200);
    FUN_03f5c2a4(&DAT_09195a60);
    FUN_03f5c2a4(&DAT_091711f0);
    FUN_03f5c2a4(&DAT_09195a68);
    FUN_03f5c2a4(&DAT_09172890);
    FUN_03f5c2a4(&DAT_09195a70);
    FUN_03f5c2a4(&DAT_091728b0);
    FUN_03f5c2a4(&DAT_09195a78);
    FUN_03f5c2a4(&DAT_09195a80);
    FUN_03f5c2a4(&DAT_09172988);
    FUN_03f5c2a4(&DAT_09172980);
    FUN_03f5c2a4(&DAT_0918c6b8);
    FUN_03f5c2a4(&DAT_09195a88);
    FUN_03f5c2a4(&DAT_09195a90);
    FUN_03f5c2a4(&DAT_091734e0);
    FUN_03f5c2a4(&DAT_091734c8);
    FUN_03f5c2a4(&DAT_09195a98);
    FUN_03f5c2a4(&DAT_09195aa0);
    FUN_03f5c2a4(&DAT_09173508);
    FUN_03f5c2a4(&DAT_091734f0);
    FUN_03f5c2a4(&DAT_09195aa8);
    FUN_03f5c2a4(&DAT_09173518);
    DAT_09516784 = 1;
  }
  uVar1 = thunk_FUN_03f9944c(DAT_09195a88);
  System_Object___ctor(uVar1,0);
  **(undefined8 **)(DAT_0918c6b8 + 0xb8) = uVar1;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_0918c6b8 + 0xb8),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09195a98);
  System_Object___ctor(uVar1,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918c6b8 + 0xb8) + 8);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09195aa8);
  System_Object___ctor(uVar1,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918c6b8 + 0xb8) + 0x10);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09195a60);
  System_Object___ctor(uVar1,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918c6b8 + 0xb8) + 0x18);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09195a58);
  System_Object___ctor(uVar1,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918c6b8 + 0xb8) + 0x20);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09195a78);
  System_Object___ctor(uVar1,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918c6b8 + 0xb8) + 0x28);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09195a48);
  System_Object___ctor(uVar1,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918c6b8 + 0xb8) + 0x30);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09195a68);
  System_Object___ctor(uVar1,0);
  puVar2 = (undefined8 *)(*(long *)(DAT_0918c6b8 + 0xb8) + 0x38);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = DAT_091734c8;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar3 = (long *)System_Type__GetTypeFromHandle(uVar1,0);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x878))(plVar3,*(undefined8 *)(*plVar3 + 0x880));
    uVar1 = DAT_091734f0;
    *(undefined8 *)(*(long *)(DAT_0918c6b8 + 0xb8) + 0x40) = uVar4;
    plVar3 = (long *)System_Type__GetTypeFromHandle(uVar1,0);
    if (plVar3 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x878))(plVar3,*(undefined8 *)(*plVar3 + 0x880));
      uVar1 = DAT_09173518;
      *(undefined8 *)(*(long *)(DAT_0918c6b8 + 0xb8) + 0x48) = uVar4;
      plVar3 = (long *)System_Type__GetTypeFromHandle(uVar1,0);
      if (plVar3 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar3 + 0x878))(plVar3,*(undefined8 *)(*plVar3 + 0x880));
        uVar1 = DAT_091711f0;
        *(undefined8 *)(*(long *)(DAT_0918c6b8 + 0xb8) + 0x50) = uVar4;
        plVar3 = (long *)System_Type__GetTypeFromHandle(uVar1,0);
        if (plVar3 != (long *)0x0) {
          uVar4 = (**(code **)(*plVar3 + 0x878))(plVar3,*(undefined8 *)(*plVar3 + 0x880));
          uVar1 = DAT_09171200;
          *(undefined8 *)(*(long *)(DAT_0918c6b8 + 0xb8) + 0x58) = uVar4;
          plVar3 = (long *)System_Type__GetTypeFromHandle(uVar1,0);
          if (plVar3 != (long *)0x0) {
            uVar4 = (**(code **)(*plVar3 + 0x878))(plVar3,*(undefined8 *)(*plVar3 + 0x880));
            uVar1 = DAT_09172980;
            *(undefined8 *)(*(long *)(DAT_0918c6b8 + 0xb8) + 0x60) = uVar4;
            plVar3 = (long *)System_Type__GetTypeFromHandle(uVar1,0);
            if (plVar3 != (long *)0x0) {
              uVar4 = (**(code **)(*plVar3 + 0x878))(plVar3,*(undefined8 *)(*plVar3 + 0x880));
              uVar1 = DAT_09171078;
              *(undefined8 *)(*(long *)(DAT_0918c6b8 + 0xb8) + 0x68) = uVar4;
              plVar3 = (long *)System_Type__GetTypeFromHandle(uVar1,0);
              if (plVar3 != (long *)0x0) {
                uVar4 = (**(code **)(*plVar3 + 0x878))(plVar3,*(undefined8 *)(*plVar3 + 0x880));
                uVar1 = DAT_09172890;
                *(undefined8 *)(*(long *)(DAT_0918c6b8 + 0xb8) + 0x70) = uVar4;
                plVar3 = (long *)System_Type__GetTypeFromHandle(uVar1,0);
                if (plVar3 != (long *)0x0) {
                  uVar4 = (**(code **)(*plVar3 + 0x878))(plVar3,*(undefined8 *)(*plVar3 + 0x880));
                  uVar1 = DAT_09195a90;
                  *(undefined8 *)(*(long *)(DAT_0918c6b8 + 0xb8) + 0x78) = uVar4;
                  uVar1 = thunk_FUN_03f9944c(uVar1);
                  System_Object___ctor(uVar1,0);
                  puVar2 = (undefined8 *)(*(long *)(DAT_0918c6b8 + 0xb8) + 0x80);
                  *puVar2 = uVar1;
                  thunk_FUN_03f5d7b8(puVar2,uVar1);
                  uVar1 = thunk_FUN_03f9944c(DAT_09195aa0);
                  System_Object___ctor(uVar1,0);
                  puVar2 = (undefined8 *)(*(long *)(DAT_0918c6b8 + 0xb8) + 0x88);
                  *puVar2 = uVar1;
                  thunk_FUN_03f5d7b8(puVar2,uVar1);
                  uVar1 = thunk_FUN_03f9944c(DAT_09195a70);
                  System_Object___ctor(uVar1,0);
                  puVar2 = (undefined8 *)(*(long *)(DAT_0918c6b8 + 0xb8) + 0x90);
                  *puVar2 = uVar1;
                  thunk_FUN_03f5d7b8(puVar2,uVar1);
                  uVar1 = thunk_FUN_03f9944c(DAT_09195a80);
                  System_Object___ctor(uVar1,0);
                  puVar2 = (undefined8 *)(*(long *)(DAT_0918c6b8 + 0xb8) + 0x98);
                  *puVar2 = uVar1;
                  thunk_FUN_03f5d7b8(puVar2,uVar1);
                  uVar1 = thunk_FUN_03f9944c(DAT_09195a50);
                  System_Object___ctor(uVar1,0);
                  puVar2 = (undefined8 *)(*(long *)(DAT_0918c6b8 + 0xb8) + 0xa0);
                  *puVar2 = uVar1;
                  thunk_FUN_03f5d7b8(puVar2,uVar1);
                  plVar3 = (long *)System_Type__GetTypeFromHandle(DAT_091734e0,0);
                  if (plVar3 != (long *)0x0) {
                    uVar4 = (**(code **)(*plVar3 + 0x878))(plVar3,*(undefined8 *)(*plVar3 + 0x880));
                    uVar1 = DAT_09173508;
                    *(undefined8 *)(*(long *)(DAT_0918c6b8 + 0xb8) + 0xa8) = uVar4;
                    plVar3 = (long *)System_Type__GetTypeFromHandle(uVar1,0);
                    if (plVar3 != (long *)0x0) {
                      uVar4 = (**(code **)(*plVar3 + 0x878))
                                        (plVar3,*(undefined8 *)(*plVar3 + 0x880));
                      uVar1 = DAT_091728b0;
                      *(undefined8 *)(*(long *)(DAT_0918c6b8 + 0xb8) + 0xb0) = uVar4;
                      plVar3 = (long *)System_Type__GetTypeFromHandle(uVar1,0);
                      if (plVar3 != (long *)0x0) {
                        uVar4 = (**(code **)(*plVar3 + 0x878))
                                          (plVar3,*(undefined8 *)(*plVar3 + 0x880));
                        uVar1 = DAT_09172988;
                        *(undefined8 *)(*(long *)(DAT_0918c6b8 + 0xb8) + 0xb8) = uVar4;
                        plVar3 = (long *)System_Type__GetTypeFromHandle(uVar1,0);
                        if (plVar3 != (long *)0x0) {
                          uVar4 = (**(code **)(*plVar3 + 0x878))
                                            (plVar3,*(undefined8 *)(*plVar3 + 0x880));
                          uVar1 = DAT_09171080;
                          *(undefined8 *)(*(long *)(DAT_0918c6b8 + 0xb8) + 0xc0) = uVar4;
                          plVar3 = (long *)System_Type__GetTypeFromHandle(uVar1,0);
                          if (plVar3 != (long *)0x0) {
                            uVar1 = (**(code **)(*plVar3 + 0x878))
                                              (plVar3,*(undefined8 *)(*plVar3 + 0x880));
                            *(undefined8 *)(*(long *)(DAT_0918c6b8 + 0xb8) + 200) = uVar1;
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

