// rea decompile_all
// name: std::__ndk1::money_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get
// address: 0x400d8d8
// body: available
// range: 0x400d8d8-0x400dbbf inclusive
// range: 0x400dbf0-0x400dc17 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x400dc14 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::money_get<char, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> > >::do_get(std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, std::__ndk1::istreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, bool, std::__ndk1::ios_base&, unsigned int&, long double&)
   const */

long * __thiscall
std::__ndk1::money_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_get(undefined8 param_1,long *param_2,long *param_3,uint param_4,long param_5,uint *param_6,
      undefined8 param_7)

{
  undefined1 *puVar1;
  byte *pbVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined1 ***__ptr;
  undefined1 *puVar6;
  undefined8 uVar7;
  byte *pbVar8;
  long *plVar9;
  undefined1 ***pppuVar10;
  undefined1 ***pppuVar11;
  undefined1 **local_178 [13];
  undefined1 *local_110;
  undefined1 auStack_106 [6];
  undefined7 local_100;
  undefined4 uStack_f9;
  char local_f4 [4];
  long local_f0;
  byte *local_e8;
  byte *local_e0;
  code *local_d8;
  byte abStack_cc [100];
  long *local_68;
  
  local_e0 = abStack_cc;
  local_d8 = __do_nothing;
  local_68 = param_2;
  ios_base::getloc();
  local_110 = ctype<char>::id;
  if (ctype<char>::id._0_8_ != -1) {
    local_178[0] = &local_110;
    local_100 = SUB87(local_178,0);
    uStack_f9._0_1_ = (undefined1)((ulong)local_178 >> 0x38);
    __call_once((ulong *)ctype<char>::id,&local_100,FUN_0402d4a0);
  }
  if (((ulong)(*(long *)(local_f0 + 0x18) - *(long *)(local_f0 + 0x10) >> 3) <=
       (long)(int)ctype<char>::id._8_4_ - 1U) ||
     (plVar9 = *(long **)(*(long *)(local_f0 + 0x10) + ((long)(int)ctype<char>::id._8_4_ - 1U) * 8),
     plVar9 == (long *)0x0)) {
    FUN_03ff9c28();
LAB_0400dbac:
    __throw_runtime_error("money_get error");
LAB_0400dbb8:
    uVar7 = __throw_bad_alloc();
    locale::~locale((locale *)&local_f0);
    pbVar2 = local_e0;
    local_e0 = (byte *)0x0;
    if (pbVar2 != (byte *)0x0) {
      (*local_d8)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_0404c2dc(uVar7);
  }
  local_f4[0] = '\0';
  uVar5 = __do_get(&local_68,param_3,param_4 & 1,&local_f0,*(undefined4 *)(param_5 + 8),param_6,
                   local_f4,plVar9,&local_e0,&local_e8,&local_68);
  if ((uVar5 & 1) != 0) {
    local_100 = 0x36353433323130;
    uStack_f9 = 0x393837;
    (**(code **)(*plVar9 + 0x40))(plVar9,&local_100,(long)&uStack_f9 + 3,&local_110);
    pbVar8 = local_e0;
    pbVar2 = local_e8;
    if ((long)local_e8 - (long)local_e0 < 99) {
      __ptr = (undefined1 ***)0x0;
      pppuVar11 = local_178;
    }
    else {
      __ptr = malloc(((long)local_e8 - (long)local_e0) + 2);
      pppuVar11 = __ptr;
      if (__ptr == (undefined1 ***)0x0) goto LAB_0400dbb8;
    }
    pppuVar10 = pppuVar11;
    if (local_f4[0] != '\0') {
      pppuVar10 = (undefined1 ***)((long)pppuVar11 + 1);
      *(undefined1 *)pppuVar11 = 0x2d;
    }
    if (pbVar8 < pbVar2) {
      pppuVar11 = pppuVar10;
      do {
        puVar6 = memchr(&local_110,(uint)*pbVar8,10);
        puVar1 = auStack_106;
        if (puVar6 != (undefined1 *)0x0) {
          puVar1 = puVar6;
        }
        bVar3 = pbVar8 + 1 < local_e8;
        pppuVar10 = (undefined1 ***)((long)pppuVar11 + 1);
        *(undefined1 *)pppuVar11 = puVar1[0x10];
        pbVar8 = pbVar8 + 1;
        pppuVar11 = pppuVar10;
      } while (bVar3);
    }
    *(undefined1 *)pppuVar10 = 0;
    iVar4 = sscanf((char *)local_178,"%Lf",param_7);
    if (iVar4 != 1) goto LAB_0400dbac;
    if (__ptr != (undefined1 ***)0x0) {
      free(__ptr);
    }
  }
  if (local_68 == (long *)0x0) {
LAB_0400db18:
    bVar3 = true;
    if (param_3 == (long *)0x0) goto LAB_0400db0c;
LAB_0400db20:
    if (param_3[3] == param_3[4]) {
      iVar4 = (**(code **)(*param_3 + 0x48))(param_3);
      if (bVar3 != (iVar4 == -1)) goto LAB_0400db3c;
    }
    else if (bVar3 != false) goto LAB_0400db3c;
  }
  else {
    if (local_68[3] == local_68[4]) {
      iVar4 = (**(code **)(*local_68 + 0x48))();
      if (iVar4 == -1) {
        local_68 = (long *)0x0;
        goto LAB_0400db18;
      }
      bVar3 = local_68 == (long *)0x0;
    }
    else {
      bVar3 = false;
    }
    if (param_3 != (long *)0x0) goto LAB_0400db20;
LAB_0400db0c:
    if (bVar3 == false) goto LAB_0400db3c;
  }
  *param_6 = *param_6 | 2;
LAB_0400db3c:
  plVar9 = local_68;
  locale::~locale((locale *)&local_f0);
  pbVar2 = local_e0;
  local_e0 = (byte *)0x0;
  if (pbVar2 != (byte *)0x0) {
    (*local_d8)();
  }
  return plVar9;
}

